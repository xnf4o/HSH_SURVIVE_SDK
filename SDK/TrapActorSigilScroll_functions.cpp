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

// Function TrapActorSigilScroll.TrapActorSigilScroll_C.FindLaunchDirection
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector ATrapActorSigilScroll_C::FindLaunchDirection(class AActor* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorSigilScroll.TrapActorSigilScroll_C.FindLaunchDirection");

	ATrapActorSigilScroll_C_FindLaunchDirection_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function TrapActorSigilScroll.TrapActorSigilScroll_C.IsCanInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATrapActorSigilScroll_C::IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorSigilScroll.TrapActorSigilScroll_C.IsCanInteract");

	ATrapActorSigilScroll_C_IsCanInteract_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function TrapActorSigilScroll.TrapActorSigilScroll_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATrapActorSigilScroll_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorSigilScroll.TrapActorSigilScroll_C.UserConstructionScript");

	ATrapActorSigilScroll_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorSigilScroll.TrapActorSigilScroll_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATrapActorSigilScroll_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorSigilScroll.TrapActorSigilScroll_C.ReceiveBeginPlay");

	ATrapActorSigilScroll_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorSigilScroll.TrapActorSigilScroll_C.InitOverride
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATrapTargetActor_C*> Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATrapActorSigilScroll_C::InitOverride(TArray<class ATrapTargetActor_C*>* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorSigilScroll.TrapActorSigilScroll_C.InitOverride");

	ATrapActorSigilScroll_C_InitOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

}


// Function TrapActorSigilScroll.TrapActorSigilScroll_C.AddedItemSuccess
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ATrapActorSigilScroll_C::AddedItemSuccess()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorSigilScroll.TrapActorSigilScroll_C.AddedItemSuccess");

	ATrapActorSigilScroll_C_AddedItemSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorSigilScroll.TrapActorSigilScroll_C.TalismanDestroy
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ATrapActorSigilScroll_C::TalismanDestroy()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorSigilScroll.TrapActorSigilScroll_C.TalismanDestroy");

	ATrapActorSigilScroll_C_TalismanDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorSigilScroll.TrapActorSigilScroll_C.BlockSurvivor
// (BlueprintCallable, BlueprintEvent)
void ATrapActorSigilScroll_C::BlockSurvivor()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorSigilScroll.TrapActorSigilScroll_C.BlockSurvivor");

	ATrapActorSigilScroll_C_BlockSurvivor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TrapActorSigilScroll.TrapActorSigilScroll_C.ExecuteUbergraph_TrapActorSigilScroll
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapActorSigilScroll_C::ExecuteUbergraph_TrapActorSigilScroll(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorSigilScroll.TrapActorSigilScroll_C.ExecuteUbergraph_TrapActorSigilScroll");

	ATrapActorSigilScroll_C_ExecuteUbergraph_TrapActorSigilScroll_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
