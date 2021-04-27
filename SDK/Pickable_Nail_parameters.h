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

// Function Pickable_Nail.Pickable_Nail_C.ReceiveBeginPlay
struct APickable_Nail_C_ReceiveBeginPlay_Params
{
};

// Function Pickable_Nail.Pickable_Nail_C.ShowOutline
struct APickable_Nail_C_ShowOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pickable_Nail.Pickable_Nail_C.HideOutline
struct APickable_Nail_C_HideOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pickable_Nail.Pickable_Nail_C.Interaction
struct APickable_Nail_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pickable_Nail.Pickable_Nail_C.SetCollisionResponseInteract
struct APickable_Nail_C_SetCollisionResponseInteract_Params
{
	bool                                               IsResponse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Pickable_Nail.Pickable_Nail_C.ExecuteUbergraph_Pickable_Nail
struct APickable_Nail_C_ExecuteUbergraph_Pickable_Nail_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
