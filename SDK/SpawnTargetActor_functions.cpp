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

// Function SpawnTargetActor.SpawnTargetActor_C.IsCanSpawn
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Can_                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ASpawnTargetActor_C::IsCanSpawn(bool* Can_)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function SpawnTargetActor.SpawnTargetActor_C.IsCanSpawn");

	ASpawnTargetActor_C_IsCanSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Can_ != nullptr)
		*Can_ = params.Can_;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
