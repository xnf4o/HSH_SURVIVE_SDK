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

// Function PingHunterComponent.PingHunterComponent_C.TryGetOwner
struct UPingHunterComponent_C_TryGetOwner_Params
{
	class AHSHCharacterBase*                           AsHSHCharacter_Base;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingHunterComponent.PingHunterComponent_C.FillterArray
struct UPingHunterComponent_C_FillterArray_Params
{
	TArray<struct FS_PingPair>                         Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	TArray<struct FS_PingPair>                         OutArray;                                                  // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function PingHunterComponent.PingHunterComponent_C.SoundIcon
struct UPingHunterComponent_C_SoundIcon_Params
{
	class AActor*                                      HitActor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingHunterComponent.PingHunterComponent_C.ExecuteUbergraph_PingHunterComponent
struct UPingHunterComponent_C_ExecuteUbergraph_PingHunterComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PingHunterComponent.PingHunterComponent_C.OnSoundIcon__DelegateSignature
struct UPingHunterComponent_C_OnSoundIcon__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
