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

// Function BloodTrailActor.BloodTrailActor_C.DrawTrail
struct ABloodTrailActor_C_DrawTrail_Params
{
};

// Function BloodTrailActor.BloodTrailActor_C.AddedTrailLocation
struct ABloodTrailActor_C_AddedTrailLocation_Params
{
	struct FVector                                     Location;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BloodTrailActor.BloodTrailActor_C.SetTarget
struct ABloodTrailActor_C_SetTarget_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BloodTrailActor.BloodTrailActor_C.ReceiveTick
struct ABloodTrailActor_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BloodTrailActor.BloodTrailActor_C.ExecuteUbergraph_BloodTrailActor
struct ABloodTrailActor_C_ExecuteUbergraph_BloodTrailActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
