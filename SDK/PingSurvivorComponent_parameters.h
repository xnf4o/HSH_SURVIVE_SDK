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

// Function PingSurvivorComponent.PingSurvivorComponent_C.FindHunterNearActor
struct UPingSurvivorComponent_C_FindHunterNearActor_Params
{
	class AActor*                                      OtherActor;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHunterBase_C*                               Output;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingSurvivorComponent.PingSurvivorComponent_C.TryGetOwner
struct UPingSurvivorComponent_C_TryGetOwner_Params
{
	class AHSHCharacterBase*                           OutputPin;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingSurvivorComponent.PingSurvivorComponent_C.FillterArray
struct UPingSurvivorComponent_C_FillterArray_Params
{
	TArray<struct FS_PingPair>                         Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	TArray<struct FS_PingPair>                         OutArray;                                                  // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function PingSurvivorComponent.PingSurvivorComponent_C.SoundIcon
struct UPingSurvivorComponent_C_SoundIcon_Params
{
	class AActor*                                      HitActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingSurvivorComponent.PingSurvivorComponent_C.PingPotal
struct UPingSurvivorComponent_C_PingPotal_Params
{
	class AActor*                                      Portal;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Offset;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingSurvivorComponent.PingSurvivorComponent_C.PingHunterSpecter
struct UPingSurvivorComponent_C_PingHunterSpecter_Params
{
	class AHunterBase_C*                               hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingSurvivorComponent.PingSurvivorComponent_C.PingHunter
struct UPingSurvivorComponent_C_PingHunter_Params
{
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Direction;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingSurvivorComponent.PingSurvivorComponent_C.ExecuteUbergraph_PingSurvivorComponent
struct UPingSurvivorComponent_C_ExecuteUbergraph_PingSurvivorComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingSurvivorComponent.PingSurvivorComponent_C.OnSoundIcon__DelegateSignature
struct UPingSurvivorComponent_C_OnSoundIcon__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
