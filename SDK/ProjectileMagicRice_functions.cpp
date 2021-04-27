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

// Function ProjectileMagicRice.ProjectileMagicRice_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AProjectileMagicRice_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileMagicRice.ProjectileMagicRice_C.ReceiveBeginPlay");

	AProjectileMagicRice_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileMagicRice.ProjectileMagicRice_C.OnHitCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectileMagicRice_C::OnHitCharacter(class AActor* Actor)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileMagicRice.ProjectileMagicRice_C.OnHitCharacter");

	AProjectileMagicRice_C_OnHitCharacter_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ProjectileMagicRice.ProjectileMagicRice_C.ExecuteUbergraph_ProjectileMagicRice
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AProjectileMagicRice_C::ExecuteUbergraph_ProjectileMagicRice(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function ProjectileMagicRice.ProjectileMagicRice_C.ExecuteUbergraph_ProjectileMagicRice");

	AProjectileMagicRice_C_ExecuteUbergraph_ProjectileMagicRice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
