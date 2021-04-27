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

// Function BloodTrailSplineActor.BloodTrailSplineActor_C.ToggleVisibility
struct ABloodTrailSplineActor_C_ToggleVisibility_Params
{
	bool                                               bIsEnable;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BloodTrailSplineActor.BloodTrailSplineActor_C.UpdateSplinePoints
struct ABloodTrailSplineActor_C_UpdateSplinePoints_Params
{
	TArray<struct FVector>                             Position;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BloodTrailSplineActor.BloodTrailSplineActor_C.Initialize
struct ABloodTrailSplineActor_C_Initialize_Params
{
	TArray<struct FVector>                             Position;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function BloodTrailSplineActor.BloodTrailSplineActor_C.ParticleMovement__FinishedFunc
struct ABloodTrailSplineActor_C_ParticleMovement__FinishedFunc_Params
{
};

// Function BloodTrailSplineActor.BloodTrailSplineActor_C.ParticleMovement__UpdateFunc
struct ABloodTrailSplineActor_C_ParticleMovement__UpdateFunc_Params
{
};

// Function BloodTrailSplineActor.BloodTrailSplineActor_C.ExecuteUbergraph_BloodTrailSplineActor
struct ABloodTrailSplineActor_C_ExecuteUbergraph_BloodTrailSplineActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
