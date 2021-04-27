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

// Function HSHTargetTypeConeTrace.HSHTargetTypeConeTrace_C.GetTargets
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AHSHCharacterBase*       TargetingCharacter             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  TargetingActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<struct FHitResult>      OutHitResults                  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
// TArray<class AActor*>          OutActors                      (Parm, OutParm, ZeroConstructor)
void UHSHTargetTypeConeTrace_C::GetTargets(class AHSHCharacterBase* TargetingCharacter, class AActor* TargetingActor, const struct FGameplayEventData& EventData, TArray<struct FHitResult>* OutHitResults, TArray<class AActor*>* OutActors)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function HSHTargetTypeConeTrace.HSHTargetTypeConeTrace_C.GetTargets");

	UHSHTargetTypeConeTrace_C_GetTargets_Params params;
	params.TargetingCharacter = TargetingCharacter;
	params.TargetingActor = TargetingActor;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHitResults != nullptr)
		*OutHitResults = params.OutHitResults;
	if (OutActors != nullptr)
		*OutActors = params.OutActors;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
