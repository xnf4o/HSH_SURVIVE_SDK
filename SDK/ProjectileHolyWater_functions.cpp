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

// Function ProjectileHolyWater.ProjectileHolyWater_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AProjectileHolyWater_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHolyWater.ProjectileHolyWater_C.ReceiveBeginPlay");

	AProjectileHolyWater_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHolyWater.ProjectileHolyWater_C.OnHitCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectileHolyWater_C::OnHitCharacter(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHolyWater.ProjectileHolyWater_C.OnHitCharacter");

	AProjectileHolyWater_C_OnHitCharacter_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileHolyWater.ProjectileHolyWater_C.ExecuteUbergraph_ProjectileHolyWater
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectileHolyWater_C::ExecuteUbergraph_ProjectileHolyWater(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileHolyWater.ProjectileHolyWater_C.ExecuteUbergraph_ProjectileHolyWater");

	AProjectileHolyWater_C_ExecuteUbergraph_ProjectileHolyWater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
