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

// Function SoundControllerBase.SoundControllerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ASoundControllerBase_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerBase.SoundControllerBase_C.UserConstructionScript");

	ASoundControllerBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerBase.SoundControllerBase_C.StopSound
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASoundControllerBase_C::StopSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerBase.SoundControllerBase_C.StopSound");

	ASoundControllerBase_C_StopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerBase.SoundControllerBase_C.MulticastPlaySound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASoundControllerBase_C::MulticastPlaySound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerBase.SoundControllerBase_C.MulticastPlaySound");

	ASoundControllerBase_C_MulticastPlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerBase.SoundControllerBase_C.PauseSound
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASoundControllerBase_C::PauseSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerBase.SoundControllerBase_C.PauseSound");

	ASoundControllerBase_C_PauseSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerBase.SoundControllerBase_C.PlaySound
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASoundControllerBase_C::PlaySound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerBase.SoundControllerBase_C.PlaySound");

	ASoundControllerBase_C_PlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerBase.SoundControllerBase_C.MulticastPauseSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASoundControllerBase_C::MulticastPauseSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerBase.SoundControllerBase_C.MulticastPauseSound");

	ASoundControllerBase_C_MulticastPauseSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerBase.SoundControllerBase_C.MulticastStopSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASoundControllerBase_C::MulticastStopSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerBase.SoundControllerBase_C.MulticastStopSound");

	ASoundControllerBase_C_MulticastStopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerBase.SoundControllerBase_C.ClientStopSound
// (BlueprintCallable, BlueprintEvent)
void ASoundControllerBase_C::ClientStopSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerBase.SoundControllerBase_C.ClientStopSound");

	ASoundControllerBase_C_ClientStopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerBase.SoundControllerBase_C.ExecuteUbergraph_SoundControllerBase
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASoundControllerBase_C::ExecuteUbergraph_SoundControllerBase(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerBase.SoundControllerBase_C.ExecuteUbergraph_SoundControllerBase");

	ASoundControllerBase_C_ExecuteUbergraph_SoundControllerBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
