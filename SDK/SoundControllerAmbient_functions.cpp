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

// Function SoundControllerAmbient.SoundControllerAmbient_C.OnRep_bActive
// (BlueprintCallable, BlueprintEvent)
void ASoundControllerAmbient_C::OnRep_bActive()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerAmbient.SoundControllerAmbient_C.OnRep_bActive");

	ASoundControllerAmbient_C_OnRep_bActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerAmbient.SoundControllerAmbient_C.GetRandomVariant
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          MainValue                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ASoundControllerAmbient_C::GetRandomVariant(float MainValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerAmbient.SoundControllerAmbient_C.GetRandomVariant");

	ASoundControllerAmbient_C_GetRandomVariant_Params params;
	params.MainValue = MainValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function SoundControllerAmbient.SoundControllerAmbient_C.OnRep_SeletedAmbientSound
// (HasDefaults, BlueprintCallable, BlueprintEvent)
void ASoundControllerAmbient_C::OnRep_SeletedAmbientSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerAmbient.SoundControllerAmbient_C.OnRep_SeletedAmbientSound");

	ASoundControllerAmbient_C_OnRep_SeletedAmbientSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerAmbient.SoundControllerAmbient_C.PlaySound
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASoundControllerAmbient_C::PlaySound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerAmbient.SoundControllerAmbient_C.PlaySound");

	ASoundControllerAmbient_C_PlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerAmbient.SoundControllerAmbient_C.RandomAmbientSound
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASoundControllerAmbient_C::RandomAmbientSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerAmbient.SoundControllerAmbient_C.RandomAmbientSound");

	ASoundControllerAmbient_C_RandomAmbientSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerAmbient.SoundControllerAmbient_C.MulticastPauseSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASoundControllerAmbient_C::MulticastPauseSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerAmbient.SoundControllerAmbient_C.MulticastPauseSound");

	ASoundControllerAmbient_C_MulticastPauseSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerAmbient.SoundControllerAmbient_C.MulticastStopSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASoundControllerAmbient_C::MulticastStopSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerAmbient.SoundControllerAmbient_C.MulticastStopSound");

	ASoundControllerAmbient_C_MulticastStopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerAmbient.SoundControllerAmbient_C.StopSound
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
void ASoundControllerAmbient_C::StopSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerAmbient.SoundControllerAmbient_C.StopSound");

	ASoundControllerAmbient_C_StopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerAmbient.SoundControllerAmbient_C.MulticastPlaySound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void ASoundControllerAmbient_C::MulticastPlaySound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerAmbient.SoundControllerAmbient_C.MulticastPlaySound");

	ASoundControllerAmbient_C_MulticastPlaySound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerAmbient.SoundControllerAmbient_C.ClientStopSound
// (BlueprintCallable, BlueprintEvent)
void ASoundControllerAmbient_C::ClientStopSound()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerAmbient.SoundControllerAmbient_C.ClientStopSound");

	ASoundControllerAmbient_C_ClientStopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SoundControllerAmbient.SoundControllerAmbient_C.ExecuteUbergraph_SoundControllerAmbient
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ASoundControllerAmbient_C::ExecuteUbergraph_SoundControllerAmbient(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SoundControllerAmbient.SoundControllerAmbient_C.ExecuteUbergraph_SoundControllerAmbient");

	ASoundControllerAmbient_C_ExecuteUbergraph_SoundControllerAmbient_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
