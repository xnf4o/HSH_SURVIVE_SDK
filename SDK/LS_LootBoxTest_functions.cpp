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

// Function LS_LootBoxTest.SequenceDirector_C.SpawnExplodeParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALootBoxObject_C*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::SpawnExplodeParticle(class ALootBoxObject_C* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LS_LootBoxTest.SequenceDirector_C.SpawnExplodeParticle");

	USequenceDirector_C_SpawnExplodeParticle_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LS_LootBoxTest.SequenceDirector_C.SpawnBeginParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALootBoxObject_C*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::SpawnBeginParticle(class ALootBoxObject_C* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LS_LootBoxTest.SequenceDirector_C.SpawnBeginParticle");

	USequenceDirector_C_SpawnBeginParticle_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LS_LootBoxTest.SequenceDirector_C.SetJarAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALootBoxObject_C*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::SetJarAlpha(class ALootBoxObject_C* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LS_LootBoxTest.SequenceDirector_C.SetJarAlpha");

	USequenceDirector_C_SetJarAlpha_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LS_LootBoxTest.SequenceDirector_C.ResetPose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALootBoxObject_C*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::ResetPose(class ALootBoxObject_C* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LS_LootBoxTest.SequenceDirector_C.ResetPose");

	USequenceDirector_C_ResetPose_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LS_LootBoxTest.SequenceDirector_C.PlayLootBoxAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALootBoxObject_C*        Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void USequenceDirector_C::PlayLootBoxAnim(class ALootBoxObject_C* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function LS_LootBoxTest.SequenceDirector_C.PlayLootBoxAnim");

	USequenceDirector_C_PlayLootBoxAnim_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
