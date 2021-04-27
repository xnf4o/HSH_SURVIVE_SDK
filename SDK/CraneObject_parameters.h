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

// Function CraneObject.CraneObject_C.IsSurvivorBlocked
struct ACraneObject_C_IsSurvivorBlocked_Params
{
	bool                                               IsBlocked;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CraneObject.CraneObject_C.ReceiveTick
struct ACraneObject_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CraneObject.CraneObject_C.ReceiveBeginPlay
struct ACraneObject_C_ReceiveBeginPlay_Params
{
};

// Function CraneObject.CraneObject_C.ExecuteUbergraph_CraneObject
struct ACraneObject_C_ExecuteUbergraph_CraneObject_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
