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

// Function ProjectileHolyKnife.ProjectileHolyKnife_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AProjectileHolyKnife_C::UserConstructionScript()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHolyKnife.ProjectileHolyKnife_C.UserConstructionScript");

	AProjectileHolyKnife_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHolyKnife.ProjectileHolyKnife_C.SpawnParticle
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectileHolyKnife_C::SpawnParticle(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHolyKnife.ProjectileHolyKnife_C.SpawnParticle");

	AProjectileHolyKnife_C_SpawnParticle_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHolyKnife.ProjectileHolyKnife_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AProjectileHolyKnife_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHolyKnife.ProjectileHolyKnife_C.ReceiveBeginPlay");

	AProjectileHolyKnife_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHolyKnife.ProjectileHolyKnife_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectileHolyKnife_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHolyKnife.ProjectileHolyKnife_C.ReceiveTick");

	AProjectileHolyKnife_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHolyKnife.ProjectileHolyKnife_C.OnHitCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectileHolyKnife_C::OnHitCharacter(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHolyKnife.ProjectileHolyKnife_C.OnHitCharacter");

	AProjectileHolyKnife_C_OnHitCharacter_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHolyKnife.ProjectileHolyKnife_C.ExecuteUbergraph_ProjectileHolyKnife
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectileHolyKnife_C::ExecuteUbergraph_ProjectileHolyKnife(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHolyKnife.ProjectileHolyKnife_C.ExecuteUbergraph_ProjectileHolyKnife");

	AProjectileHolyKnife_C_ExecuteUbergraph_ProjectileHolyKnife_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
