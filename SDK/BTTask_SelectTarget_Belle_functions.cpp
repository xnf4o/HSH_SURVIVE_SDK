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

// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.OnSurvivorMakeSoundIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SelectTarget_Belle_C::OnSurvivorMakeSoundIcon(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.OnSurvivorMakeSoundIcon");

	UBTTask_SelectTarget_Belle_C_OnSurvivorMakeSoundIcon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetBestChoiceSoundIcon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  BestChoiceSoundIcon            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SelectTarget_Belle_C::GetBestChoiceSoundIcon(class APawn* ControlledPawn, class AActor** BestChoiceSoundIcon)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetBestChoiceSoundIcon");

	UBTTask_SelectTarget_Belle_C_GetBestChoiceSoundIcon_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BestChoiceSoundIcon != nullptr)
		*BestChoiceSoundIcon = params.BestChoiceSoundIcon;

}


// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.CanChasePreviousTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanChasePreviousTarget         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_SelectTarget_Belle_C::CanChasePreviousTarget(class APawn* ControlledPawn, bool* CanChasePreviousTarget)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.CanChasePreviousTarget");

	UBTTask_SelectTarget_Belle_C_CanChasePreviousTarget_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanChasePreviousTarget != nullptr)
		*CanChasePreviousTarget = params.CanChasePreviousTarget;

}


// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.OnSurvivorVent
// (Public, BlueprintCallable, BlueprintEvent)
void UBTTask_SelectTarget_Belle_C::OnSurvivorVent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.OnSurvivorVent");

	UBTTask_SelectTarget_Belle_C_OnSurvivorVent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.ShouldTargetSurvivor
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Survivors                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_SelectTarget_Belle_C::ShouldTargetSurvivor(class APawn* ControlledPawn, bool Survivors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.ShouldTargetSurvivor");

	UBTTask_SelectTarget_Belle_C_ShouldTargetSurvivor_Params params;
	params.ControlledPawn = ControlledPawn;
	params.Survivors = Survivors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.IsTargettingSurvivor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsTargettingSurvivor           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_SelectTarget_Belle_C::IsTargettingSurvivor(bool* IsTargettingSurvivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.IsTargettingSurvivor");

	UBTTask_SelectTarget_Belle_C_IsTargettingSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsTargettingSurvivor != nullptr)
		*IsTargettingSurvivor = params.IsTargettingSurvivor;

}


// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.ExecuteFailed
// (Public, BlueprintCallable, BlueprintEvent)
void UBTTask_SelectTarget_Belle_C::ExecuteFailed()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.ExecuteFailed");

	UBTTask_SelectTarget_Belle_C_ExecuteFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetCanActivePerk
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanActivePerk                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_SelectTarget_Belle_C::GetCanActivePerk(class APawn* ControlledPawn, bool* CanActivePerk)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetCanActivePerk");

	UBTTask_SelectTarget_Belle_C_GetCanActivePerk_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanActivePerk != nullptr)
		*CanActivePerk = params.CanActivePerk;

}


// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetCanSpecter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           CanSpecter                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBTTask_SelectTarget_Belle_C::GetCanSpecter(class APawn* ControlledPawn, bool* CanSpecter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetCanSpecter");

	UBTTask_SelectTarget_Belle_C_GetCanSpecter_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CanSpecter != nullptr)
		*CanSpecter = params.CanSpecter;

}


// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetBestChoiceRitual
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  BestChoiceRitual               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SelectTarget_Belle_C::GetBestChoiceRitual(class APawn* ControlledPawn, class AActor** BestChoiceRitual)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetBestChoiceRitual");

	UBTTask_SelectTarget_Belle_C_GetBestChoiceRitual_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BestChoiceRitual != nullptr)
		*BestChoiceRitual = params.BestChoiceRitual;

}


// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetBestChoiceSurvivor
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   BestChoiceSurvivor             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SelectTarget_Belle_C::GetBestChoiceSurvivor(class APawn* ControlledPawn, class APawn** BestChoiceSurvivor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.GetBestChoiceSurvivor");

	UBTTask_SelectTarget_Belle_C_GetBestChoiceSurvivor_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BestChoiceSurvivor != nullptr)
		*BestChoiceSurvivor = params.BestChoiceSurvivor;

}


// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*           OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SelectTarget_Belle_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.ReceiveExecuteAI");

	UBTTask_SelectTarget_Belle_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.ExecuteUbergraph_BTTask_SelectTarget_Belle
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBTTask_SelectTarget_Belle_C::ExecuteUbergraph_BTTask_SelectTarget_Belle(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BTTask_SelectTarget_Belle.BTTask_SelectTarget_Belle_C.ExecuteUbergraph_BTTask_SelectTarget_Belle");

	UBTTask_SelectTarget_Belle_C_ExecuteUbergraph_BTTask_SelectTarget_Belle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
