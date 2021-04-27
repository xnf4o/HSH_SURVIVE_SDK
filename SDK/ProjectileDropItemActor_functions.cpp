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

// Function ProjectileDropItemActor.ProjectileDropItemActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AProjectileDropItemActor_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileDropItemActor.ProjectileDropItemActor_C.ReceiveBeginPlay");

	AProjectileDropItemActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileDropItemActor.ProjectileDropItemActor_C.ExecuteUbergraph_ProjectileDropItemActor
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectileDropItemActor_C::ExecuteUbergraph_ProjectileDropItemActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileDropItemActor.ProjectileDropItemActor_C.ExecuteUbergraph_ProjectileDropItemActor");

	AProjectileDropItemActor_C_ExecuteUbergraph_ProjectileDropItemActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
