#pragma once

// Name: hsh, Version: 2


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function HSHTargetTypeConeTrace.HSHTargetTypeConeTrace_C.GetTargets
struct UHSHTargetTypeConeTrace_C_GetTargets_Params
{
	class AHSHCharacterBase*                           TargetingCharacter;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      TargetingActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                          EventData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<struct FHitResult>                          OutHitResults;                                             // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
	TArray<class AActor*>                              OutActors;                                                 // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
