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

// Function CraneBase.CraneBase_C.EndCooldown
// (Public, BlueprintCallable, BlueprintEvent)
void ACraneBase_C::EndCooldown()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneBase.CraneBase_C.EndCooldown");

	ACraneBase_C_EndCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraneBase.CraneBase_C.StartCooldown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ACraneBase_C::StartCooldown()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneBase.CraneBase_C.StartCooldown");

	ACraneBase_C_StartCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraneBase.CraneBase_C.IsCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACraneBase_C::IsCooldown(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneBase.CraneBase_C.IsCooldown");

	ACraneBase_C_IsCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function CraneBase.CraneBase_C.IsCanInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACraneBase_C::IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneBase.CraneBase_C.IsCanInteract");

	ACraneBase_C_IsCanInteract_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function CraneBase.CraneBase_C.IsLeverOn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ACraneBase_C::IsLeverOn(bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneBase.CraneBase_C.IsLeverOn");

	ACraneBase_C_IsLeverOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function CraneBase.CraneBase_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACraneBase_C::Interaction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneBase.CraneBase_C.Interaction");

	ACraneBase_C_Interaction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraneBase.CraneBase_C.OnServerSwitchChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACraneBase_C::OnServerSwitchChange(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneBase.CraneBase_C.OnServerSwitchChange");

	ACraneBase_C_OnServerSwitchChange_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraneBase.CraneBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ACraneBase_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneBase.CraneBase_C.ReceiveBeginPlay");

	ACraneBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraneBase.CraneBase_C.ShowIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PlayerCharacter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACraneBase_C::ShowIndicator(class AActor* PlayerCharacter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneBase.CraneBase_C.ShowIndicator");

	ACraneBase_C_ShowIndicator_Params params;
	params.PlayerCharacter = PlayerCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CraneBase.CraneBase_C.ExecuteUbergraph_CraneBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACraneBase_C::ExecuteUbergraph_CraneBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function CraneBase.CraneBase_C.ExecuteUbergraph_CraneBase");

	ACraneBase_C_ExecuteUbergraph_CraneBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
