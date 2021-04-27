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

// Function Pickable_Trap.Pickable_Trap_C.Interaction
struct APickable_Trap_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pickable_Trap.Pickable_Trap_C.SetUpItemDescription
struct APickable_Trap_C_SetUpItemDescription_Params
{
};

// Function Pickable_Trap.Pickable_Trap_C.OnRitualStateUpdate
struct APickable_Trap_C_OnRitualStateUpdate_Params
{
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pickable_Trap.Pickable_Trap_C.SetCollisionResponseInteract
struct APickable_Trap_C_SetCollisionResponseInteract_Params
{
	bool                                               IsResponse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Pickable_Trap.Pickable_Trap_C.ExecuteUbergraph_Pickable_Trap
struct APickable_Trap_C_ExecuteUbergraph_Pickable_Trap_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
