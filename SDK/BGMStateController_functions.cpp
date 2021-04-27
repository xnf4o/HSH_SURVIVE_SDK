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

// Function BGMStateController.BGMStateController_C.OnRitualStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABGMStateController_C::OnRitualStateChanged(int State)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BGMStateController.BGMStateController_C.OnRitualStateChanged");

	ABGMStateController_C_OnRitualStateChanged_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BGMStateController.BGMStateController_C.ChangeBGMState
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              NewSound                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABGMStateController_C::ChangeBGMState(class USoundBase* NewSound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BGMStateController.BGMStateController_C.ChangeBGMState");

	ABGMStateController_C_ChangeBGMState_Params params;
	params.NewSound = NewSound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BGMStateController.BGMStateController_C.MulticastBGMSD
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABGMStateController_C::MulticastBGMSD()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BGMStateController.BGMStateController_C.MulticastBGMSD");

	ABGMStateController_C_MulticastBGMSD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BGMStateController.BGMStateController_C.ServerBGMSD
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ABGMStateController_C::ServerBGMSD()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BGMStateController.BGMStateController_C.ServerBGMSD");

	ABGMStateController_C_ServerBGMSD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BGMStateController.BGMStateController_C.StopBGM
// (BlueprintCallable, BlueprintEvent)
void ABGMStateController_C::StopBGM()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BGMStateController.BGMStateController_C.StopBGM");

	ABGMStateController_C_StopBGM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BGMStateController.BGMStateController_C.ExecuteUbergraph_BGMStateController
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABGMStateController_C::ExecuteUbergraph_BGMStateController(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function BGMStateController.BGMStateController_C.ExecuteUbergraph_BGMStateController");

	ABGMStateController_C_ExecuteUbergraph_BGMStateController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
