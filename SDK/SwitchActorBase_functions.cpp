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

// Function SwitchActorBase.SwitchActorBase_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASwitchActorBase_C::Interaction(class AHSHCharacterBase* Character)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SwitchActorBase.SwitchActorBase_C.Interaction");

	ASwitchActorBase_C_Interaction_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SwitchActorBase.SwitchActorBase_C.BndEvt__Door_K2Node_ComponentBoundEvent_1_OnDestroy__DelegateSignature
// (BlueprintEvent)
void ASwitchActorBase_C::BndEvt__Door_K2Node_ComponentBoundEvent_1_OnDestroy__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SwitchActorBase.SwitchActorBase_C.BndEvt__Door_K2Node_ComponentBoundEvent_1_OnDestroy__DelegateSignature");

	ASwitchActorBase_C_BndEvt__Door_K2Node_ComponentBoundEvent_1_OnDestroy__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SwitchActorBase.SwitchActorBase_C.DisableInteraction
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASwitchActorBase_C::DisableInteraction()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SwitchActorBase.SwitchActorBase_C.DisableInteraction");

	ASwitchActorBase_C_DisableInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SwitchActorBase.SwitchActorBase_C.ExecuteUbergraph_SwitchActorBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASwitchActorBase_C::ExecuteUbergraph_SwitchActorBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SwitchActorBase.SwitchActorBase_C.ExecuteUbergraph_SwitchActorBase");

	ASwitchActorBase_C_ExecuteUbergraph_SwitchActorBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
