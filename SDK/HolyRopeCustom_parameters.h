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

// Function HolyRopeCustom.HolyRopeCustom_C.SetMesh
struct AHolyRopeCustom_C_SetMesh_Params
{
};

// Function HolyRopeCustom.HolyRopeCustom_C.SetZeroTargentWithRootLine
struct AHolyRopeCustom_C_SetZeroTargentWithRootLine_Params
{
};

// Function HolyRopeCustom.HolyRopeCustom_C.GetEndPosition
struct AHolyRopeCustom_C_GetEndPosition_Params
{
	int                                                LineIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     EndPosition;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DebugPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HolyRopeCustom.HolyRopeCustom_C.GetStartPosition
struct AHolyRopeCustom_C_GetStartPosition_Params
{
	int                                                LineIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StartPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DebugPosition;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HolyRopeCustom.HolyRopeCustom_C.InitialCuve
struct AHolyRopeCustom_C_InitialCuve_Params
{
	bool                                               IsRandom;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HolyRopeCustom.HolyRopeCustom_C.CreateCuve
struct AHolyRopeCustom_C_CreateCuve_Params
{
	int                                                LineIndex;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HolyRopeCustom.HolyRopeCustom_C.UserConstructionScript
struct AHolyRopeCustom_C_UserConstructionScript_Params
{
};

// Function HolyRopeCustom.HolyRopeCustom_C.Timeline_Fade__FinishedFunc
struct AHolyRopeCustom_C_Timeline_Fade__FinishedFunc_Params
{
};

// Function HolyRopeCustom.HolyRopeCustom_C.Timeline_Fade__UpdateFunc
struct AHolyRopeCustom_C_Timeline_Fade__UpdateFunc_Params
{
};

// Function HolyRopeCustom.HolyRopeCustom_C.FadeIn
struct AHolyRopeCustom_C_FadeIn_Params
{
};

// Function HolyRopeCustom.HolyRopeCustom_C.FadeOut
struct AHolyRopeCustom_C_FadeOut_Params
{
};

// Function HolyRopeCustom.HolyRopeCustom_C.ExecuteUbergraph_HolyRopeCustom
struct AHolyRopeCustom_C_ExecuteUbergraph_HolyRopeCustom_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
