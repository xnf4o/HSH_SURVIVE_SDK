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

// Function LootBoxObject.LootBoxObject_C.SpawnSlideAudio
// (BlueprintCallable, BlueprintEvent)
void ALootBoxObject_C::SpawnSlideAudio()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxObject.LootBoxObject_C.SpawnSlideAudio");

	ALootBoxObject_C_SpawnSlideAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxObject.LootBoxObject_C.PlayLootBoxAnim
// (BlueprintCallable, BlueprintEvent)
void ALootBoxObject_C::PlayLootBoxAnim()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxObject.LootBoxObject_C.PlayLootBoxAnim");

	ALootBoxObject_C_PlayLootBoxAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxObject.LootBoxObject_C.ResetPose
// (BlueprintCallable, BlueprintEvent)
void ALootBoxObject_C::ResetPose()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxObject.LootBoxObject_C.ResetPose");

	ALootBoxObject_C_ResetPose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxObject.LootBoxObject_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootBoxObject_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxObject.LootBoxObject_C.ReceiveTick");

	ALootBoxObject_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxObject.LootBoxObject_C.SetAlpha
// (BlueprintCallable, BlueprintEvent)
void ALootBoxObject_C::SetAlpha()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxObject.LootBoxObject_C.SetAlpha");

	ALootBoxObject_C_SetAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxObject.LootBoxObject_C.RandomMaterial
// (BlueprintCallable, BlueprintEvent)
void ALootBoxObject_C::RandomMaterial()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxObject.LootBoxObject_C.RandomMaterial");

	ALootBoxObject_C_RandomMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxObject.LootBoxObject_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ALootBoxObject_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxObject.LootBoxObject_C.ReceiveBeginPlay");

	ALootBoxObject_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxObject.LootBoxObject_C.SpawnBeginParticle&SFX
// (BlueprintCallable, BlueprintEvent)
void ALootBoxObject_C::SpawnBeginParticle_SFX()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxObject.LootBoxObject_C.SpawnBeginParticle&SFX");

	ALootBoxObject_C_SpawnBeginParticle_SFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxObject.LootBoxObject_C.SpawnExplodeParticle
// (BlueprintCallable, BlueprintEvent)
void ALootBoxObject_C::SpawnExplodeParticle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxObject.LootBoxObject_C.SpawnExplodeParticle");

	ALootBoxObject_C_SpawnExplodeParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LootBoxObject.LootBoxObject_C.ExecuteUbergraph_LootBoxObject
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALootBoxObject_C::ExecuteUbergraph_LootBoxObject(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LootBoxObject.LootBoxObject_C.ExecuteUbergraph_LootBoxObject");

	ALootBoxObject_C_ExecuteUbergraph_LootBoxObject_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
