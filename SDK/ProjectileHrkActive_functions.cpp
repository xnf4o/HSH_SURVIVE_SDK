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

// Function ProjectileHrkActive.ProjectileHrkActive_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectileHrkActive_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHrkActive.ProjectileHrkActive_C.ReceiveTick");

	AProjectileHrkActive_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHrkActive.ProjectileHrkActive_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AProjectileHrkActive_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHrkActive.ProjectileHrkActive_C.ReceiveBeginPlay");

	AProjectileHrkActive_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHrkActive.ProjectileHrkActive_C.HitWall
// (BlueprintCallable, BlueprintEvent)
void AProjectileHrkActive_C::HitWall()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHrkActive.ProjectileHrkActive_C.HitWall");

	AProjectileHrkActive_C_HitWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHrkActive.ProjectileHrkActive_C.SpawnParticle
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AProjectileHrkActive_C::SpawnParticle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHrkActive.ProjectileHrkActive_C.SpawnParticle");

	AProjectileHrkActive_C_SpawnParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHrkActive.ProjectileHrkActive_C.OnHitCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectileHrkActive_C::OnHitCharacter(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHrkActive.ProjectileHrkActive_C.OnHitCharacter");

	AProjectileHrkActive_C_OnHitCharacter_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHrkActive.ProjectileHrkActive_C.OnHitConstruct
// (Public, BlueprintCallable, BlueprintEvent)
void AProjectileHrkActive_C::OnHitConstruct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHrkActive.ProjectileHrkActive_C.OnHitConstruct");

	AProjectileHrkActive_C_OnHitConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHrkActive.ProjectileHrkActive_C.ExecuteUbergraph_ProjectileHrkActive
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectileHrkActive_C::ExecuteUbergraph_ProjectileHrkActive(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHrkActive.ProjectileHrkActive_C.ExecuteUbergraph_ProjectileHrkActive");

	AProjectileHrkActive_C_ExecuteUbergraph_ProjectileHrkActive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
