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

// Function IObjectActiveAbility.IObjectActiveAbility_C.IsActivate?
struct UIObjectActiveAbility_C_IsActivate__Params
{
	bool                                               IsActivate_;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IObjectActiveAbility.IObjectActiveAbility_C.ThisIsTeam
struct UIObjectActiveAbility_C_ThisIsTeam_Params
{
	TEnumAsByte<E_PlayerTeam_E_PlayerTeam>             IsTeam;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IObjectActiveAbility.IObjectActiveAbility_C.Deactivate
struct UIObjectActiveAbility_C_Deactivate_Params
{
};

// Function IObjectActiveAbility.IObjectActiveAbility_C.Activate
struct UIObjectActiveAbility_C_Activate_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
