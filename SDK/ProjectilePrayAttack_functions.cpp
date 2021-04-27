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

// Function ProjectilePrayAttack.ProjectilePrayAttack_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectilePrayAttack_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectilePrayAttack.ProjectilePrayAttack_C.ReceiveTick");

	AProjectilePrayAttack_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectilePrayAttack.ProjectilePrayAttack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AProjectilePrayAttack_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectilePrayAttack.ProjectilePrayAttack_C.ReceiveBeginPlay");

	AProjectilePrayAttack_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectilePrayAttack.ProjectilePrayAttack_C.HitWall
// (BlueprintCallable, BlueprintEvent)
void AProjectilePrayAttack_C::HitWall()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectilePrayAttack.ProjectilePrayAttack_C.HitWall");

	AProjectilePrayAttack_C_HitWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectilePrayAttack.ProjectilePrayAttack_C.SpawnParticle
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AProjectilePrayAttack_C::SpawnParticle()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectilePrayAttack.ProjectilePrayAttack_C.SpawnParticle");

	AProjectilePrayAttack_C_SpawnParticle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectilePrayAttack.ProjectilePrayAttack_C.OnHitCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectilePrayAttack_C::OnHitCharacter(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectilePrayAttack.ProjectilePrayAttack_C.OnHitCharacter");

	AProjectilePrayAttack_C_OnHitCharacter_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectilePrayAttack.ProjectilePrayAttack_C.OnHitConstruct
// (Public, BlueprintCallable, BlueprintEvent)
void AProjectilePrayAttack_C::OnHitConstruct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectilePrayAttack.ProjectilePrayAttack_C.OnHitConstruct");

	AProjectilePrayAttack_C_OnHitConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectilePrayAttack.ProjectilePrayAttack_C.ExecuteUbergraph_ProjectilePrayAttack
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectilePrayAttack_C::ExecuteUbergraph_ProjectilePrayAttack(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectilePrayAttack.ProjectilePrayAttack_C.ExecuteUbergraph_ProjectilePrayAttack");

	AProjectilePrayAttack_C_ExecuteUbergraph_ProjectilePrayAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
