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

// Function Telephone.Telephone_C.EnableInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ATelephone_C::EnableInteraction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Telephone.Telephone_C.EnableInteraction");

	ATelephone_C_EnableInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Telephone.Telephone_C.DisableInteraction
// (Public, BlueprintCallable, BlueprintEvent)
void ATelephone_C::DisableInteraction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Telephone.Telephone_C.DisableInteraction");

	ATelephone_C_DisableInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Telephone.Telephone_C.IsCanInteract
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<E_Role_E_Role>     Role                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Return                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATelephone_C::IsCanInteract(TEnumAsByte<E_Role_E_Role> Role, bool* Return)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Telephone.Telephone_C.IsCanInteract");

	ATelephone_C_IsCanInteract_Params params;
	params.Role = Role;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;

}


// Function Telephone.Telephone_C.OnHunterScan
// (Public, BlueprintCallable, BlueprintEvent)
void ATelephone_C::OnHunterScan()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Telephone.Telephone_C.OnHunterScan");

	ATelephone_C_OnHunterScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Telephone.Telephone_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATelephone_C::Interaction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Telephone.Telephone_C.Interaction");

	ATelephone_C_Interaction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Telephone.Telephone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATelephone_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Telephone.Telephone_C.ReceiveBeginPlay");

	ATelephone_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Telephone.Telephone_C.OnTimerEnd
// (BlueprintCallable, BlueprintEvent)
void ATelephone_C::OnTimerEnd()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Telephone.Telephone_C.OnTimerEnd");

	ATelephone_C_OnTimerEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Telephone.Telephone_C.MulticastOnScan
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ATelephone_C::MulticastOnScan()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Telephone.Telephone_C.MulticastOnScan");

	ATelephone_C_MulticastOnScan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Telephone.Telephone_C.MulticastOnTimerEnd
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ATelephone_C::MulticastOnTimerEnd()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Telephone.Telephone_C.MulticastOnTimerEnd");

	ATelephone_C_MulticastOnTimerEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Telephone.Telephone_C.ShowHunter
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              hunter                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATelephone_C::ShowHunter(class ACharacter* hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Telephone.Telephone_C.ShowHunter");

	ATelephone_C_ShowHunter_Params params;
	params.hunter = hunter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Telephone.Telephone_C.ExecuteUbergraph_Telephone
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATelephone_C::ExecuteUbergraph_Telephone(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function Telephone.Telephone_C.ExecuteUbergraph_Telephone");

	ATelephone_C_ExecuteUbergraph_Telephone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
