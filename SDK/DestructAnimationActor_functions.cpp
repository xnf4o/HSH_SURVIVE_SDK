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

// Function DestructAnimationActor.DestructAnimationActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ADestructAnimationActor_C::ReceiveBeginPlay()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DestructAnimationActor.DestructAnimationActor_C.ReceiveBeginPlay");

	ADestructAnimationActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function DestructAnimationActor.DestructAnimationActor_C.ExecuteUbergraph_DestructAnimationActor
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ADestructAnimationActor_C::ExecuteUbergraph_DestructAnimationActor(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function DestructAnimationActor.DestructAnimationActor_C.ExecuteUbergraph_DestructAnimationActor");

	ADestructAnimationActor_C_ExecuteUbergraph_DestructAnimationActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
