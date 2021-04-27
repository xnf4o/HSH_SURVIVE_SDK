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

// Function TrapActorHolyThread.TrapActorHolyThread_C.InitOverride
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATrapTargetActor_C*> Target                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void ATrapActorHolyThread_C::InitOverride(TArray<class ATrapTargetActor_C*>* Target)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorHolyThread.TrapActorHolyThread_C.InitOverride");

	ATrapActorHolyThread_C_InitOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;

}


// Function TrapActorHolyThread.TrapActorHolyThread_C.ExecuteUbergraph_TrapActorHolyThread
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATrapActorHolyThread_C::ExecuteUbergraph_TrapActorHolyThread(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function TrapActorHolyThread.TrapActorHolyThread_C.ExecuteUbergraph_TrapActorHolyThread");

	ATrapActorHolyThread_C_ExecuteUbergraph_TrapActorHolyThread_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
