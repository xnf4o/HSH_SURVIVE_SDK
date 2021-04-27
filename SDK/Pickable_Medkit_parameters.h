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

// Function Pickable_Medkit.Pickable_Medkit_C.ReceiveBeginPlay
struct APickable_Medkit_C_ReceiveBeginPlay_Params
{
};

// Function Pickable_Medkit.Pickable_Medkit_C.ShowOutline
struct APickable_Medkit_C_ShowOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pickable_Medkit.Pickable_Medkit_C.HideOutline
struct APickable_Medkit_C_HideOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pickable_Medkit.Pickable_Medkit_C.Interaction
struct APickable_Medkit_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pickable_Medkit.Pickable_Medkit_C.SetCollisionResponseInteract
struct APickable_Medkit_C_SetCollisionResponseInteract_Params
{
	bool                                               IsResponse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Pickable_Medkit.Pickable_Medkit_C.ExecuteUbergraph_Pickable_Medkit
struct APickable_Medkit_C_ExecuteUbergraph_Pickable_Medkit_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
