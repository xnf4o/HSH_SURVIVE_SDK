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

// Function HolyThreadActor.HolyThreadActor_C.InitialPosition
struct AHolyThreadActor_C_InitialPosition_Params
{
};

// Function HolyThreadActor.HolyThreadActor_C.SetMesh
struct AHolyThreadActor_C_SetMesh_Params
{
};

// Function HolyThreadActor.HolyThreadActor_C.GetEndPosition
struct AHolyThreadActor_C_GetEndPosition_Params
{
	int                                                LineIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndPosition;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DebugPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HolyThreadActor.HolyThreadActor_C.GetStartPosition
struct AHolyThreadActor_C_GetStartPosition_Params
{
	int                                                LineIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StartPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DebugPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HolyThreadActor.HolyThreadActor_C.InitialCuve
struct AHolyThreadActor_C_InitialCuve_Params
{
	bool                                               IsRandom;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HolyThreadActor.HolyThreadActor_C.CreateCuve
struct AHolyThreadActor_C_CreateCuve_Params
{
	int                                                LineIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HolyThreadActor.HolyThreadActor_C.UserConstructionScript
struct AHolyThreadActor_C_UserConstructionScript_Params
{
};

// Function HolyThreadActor.HolyThreadActor_C.OnTracerInteract
struct AHolyThreadActor_C_OnTracerInteract_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HolyThreadActor.HolyThreadActor_C.OnTracerEnter
struct AHolyThreadActor_C_OnTracerEnter_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HolyThreadActor.HolyThreadActor_C.OnTracerLeave
struct AHolyThreadActor_C_OnTracerLeave_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HolyThreadActor.HolyThreadActor_C.OnTracerChangeHitComponent
struct AHolyThreadActor_C_OnTracerChangeHitComponent_Params
{
	class APawn*                                       Pawn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         PreviousComponent;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         CurrentComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HolyThreadActor.HolyThreadActor_C.GenerateCurve
struct AHolyThreadActor_C_GenerateCurve_Params
{
};

// Function HolyThreadActor.HolyThreadActor_C.GenerateThread
struct AHolyThreadActor_C_GenerateThread_Params
{
	TArray<struct FVector>                             MainPointer;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FRandomStream                               RandomStream;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
};

// Function HolyThreadActor.HolyThreadActor_C.ExecuteUbergraph_HolyThreadActor
struct AHolyThreadActor_C_ExecuteUbergraph_HolyThreadActor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
