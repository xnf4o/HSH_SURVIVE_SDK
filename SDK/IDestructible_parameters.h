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

// Function IDestructible.IDestructible_C.OnHunterChangeHiddenState
struct UIDestructible_C_OnHunterChangeHiddenState_Params
{
	bool                                               InHiddenState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IDestructible.IDestructible_C.DestroyedByHunter
struct UIDestructible_C_DestroyedByHunter_Params
{
	float                                              Damage;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHunterBase_C*                               DestroyedBy;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IDestructible.IDestructible_C.SetDestructible
struct UIDestructible_C_SetDestructible_Params
{
	bool                                               Destructible;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IDestructible.IDestructible_C.GetDestructible
struct UIDestructible_C_GetDestructible_Params
{
	bool                                               Destructable;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
