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

// Function DropMovementComponent.DropMovementComponent_C.ActorFloatingLoop
struct UDropMovementComponent_C_ActorFloatingLoop_Params
{
	float                                              Alpha;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ZValue;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                             WaterComponent;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DropMovementComponent.DropMovementComponent_C.SetActorMovementActive
struct UDropMovementComponent_C_SetActorMovementActive_Params
{
	bool                                               Active;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DropMovementComponent.DropMovementComponent_C.OnRep_ParentActor
struct UDropMovementComponent_C_OnRep_ParentActor_Params
{
};

// Function DropMovementComponent.DropMovementComponent_C.Initialize
struct UDropMovementComponent_C_Initialize_Params
{
	bool                                               bIsShouldNotMove;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function DropMovementComponent.DropMovementComponent_C.ReceiveEndPlay
struct UDropMovementComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DropMovementComponent.DropMovementComponent_C.Init
struct UDropMovementComponent_C_Init_Params
{
};

// Function DropMovementComponent.DropMovementComponent_C.ExecuteUbergraph_DropMovementComponent
struct UDropMovementComponent_C_ExecuteUbergraph_DropMovementComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
