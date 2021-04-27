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

// Function StatusActor.StatusActor_C.TryGetViewPort
struct AStatusActor_C_TryGetViewPort_Params
{
	class AActor*                                      ViewTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusActor.StatusActor_C.Timeline_0__FinishedFunc
struct AStatusActor_C_Timeline_0__FinishedFunc_Params
{
};

// Function StatusActor.StatusActor_C.Timeline_0__UpdateFunc
struct AStatusActor_C_Timeline_0__UpdateFunc_Params
{
};

// Function StatusActor.StatusActor_C.ReceiveBeginPlay
struct AStatusActor_C_ReceiveBeginPlay_Params
{
};

// Function StatusActor.StatusActor_C.UpdateWidget
struct AStatusActor_C_UpdateWidget_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class UTexture2D*>                          Icons;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<TEnumAsByte<E_TagStatusMode_E_TagStatusMode>> Modes;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FS_TagStatus>                        Data;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
};

// Function StatusActor.StatusActor_C.UpdateParticle
struct AStatusActor_C_UpdateParticle_Params
{
	class UParticleSystem*                             Particle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       TagEffect;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StatusActor.StatusActor_C.ExecuteUbergraph_StatusActor
struct AStatusActor_C_ExecuteUbergraph_StatusActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
