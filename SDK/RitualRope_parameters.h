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

// Function RitualRope.RitualRope_C.IncreaseCurve
struct ARitualRope_C_IncreaseCurve_Params
{
};

// Function RitualRope.RitualRope_C.DisableTick
struct ARitualRope_C_DisableTick_Params
{
	bool                                               bEnabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function RitualRope.RitualRope_C.RefreshInit
struct ARitualRope_C_RefreshInit_Params
{
};

// Function RitualRope.RitualRope_C.InitSocketLocation
struct ARitualRope_C_InitSocketLocation_Params
{
};

// Function RitualRope.RitualRope_C.SetMesh
struct ARitualRope_C_SetMesh_Params
{
};

// Function RitualRope.RitualRope_C.SetZeroTargentWithRootLine
struct ARitualRope_C_SetZeroTargentWithRootLine_Params
{
};

// Function RitualRope.RitualRope_C.GetEndPosition
struct ARitualRope_C_GetEndPosition_Params
{
	int                                                LineIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndPosition;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DebugPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualRope.RitualRope_C.GetStartPosition
struct ARitualRope_C_GetStartPosition_Params
{
	int                                                LineIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StartPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DebugPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualRope.RitualRope_C.InitialCuve
struct ARitualRope_C_InitialCuve_Params
{
};

// Function RitualRope.RitualRope_C.CreateCuve
struct ARitualRope_C_CreateCuve_Params
{
	int                                                LineIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualRope.RitualRope_C.UserConstructionScript
struct ARitualRope_C_UserConstructionScript_Params
{
};

// Function RitualRope.RitualRope_C.ReceiveTick
struct ARitualRope_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function RitualRope.RitualRope_C.ExecuteUbergraph_RitualRope
struct ARitualRope_C_ExecuteUbergraph_RitualRope_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
