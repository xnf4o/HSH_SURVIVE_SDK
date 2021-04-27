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

// Function Pickable_Match.Pickable_Match_C.ReceiveBeginPlay
struct APickable_Match_C_ReceiveBeginPlay_Params
{
};

// Function Pickable_Match.Pickable_Match_C.ShowOutline
struct APickable_Match_C_ShowOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pickable_Match.Pickable_Match_C.HideOutline
struct APickable_Match_C_HideOutline_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pickable_Match.Pickable_Match_C.Interaction
struct APickable_Match_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Pickable_Match.Pickable_Match_C.SetCollisionResponseInteract
struct APickable_Match_C_SetCollisionResponseInteract_Params
{
	bool                                               IsResponse;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Pickable_Match.Pickable_Match_C.ExecuteUbergraph_Pickable_Match
struct APickable_Match_C_ExecuteUbergraph_Pickable_Match_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
