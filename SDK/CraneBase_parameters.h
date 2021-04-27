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

// Function CraneBase.CraneBase_C.EndCooldown
struct ACraneBase_C_EndCooldown_Params
{
};

// Function CraneBase.CraneBase_C.StartCooldown
struct ACraneBase_C_StartCooldown_Params
{
};

// Function CraneBase.CraneBase_C.IsCooldown
struct ACraneBase_C_IsCooldown_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CraneBase.CraneBase_C.IsCanInteract
struct ACraneBase_C_IsCanInteract_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CraneBase.CraneBase_C.IsLeverOn
struct ACraneBase_C_IsLeverOn_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function CraneBase.CraneBase_C.Interaction
struct ACraneBase_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CraneBase.CraneBase_C.OnServerSwitchChange
struct ACraneBase_C_OnServerSwitchChange_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CraneBase.CraneBase_C.ReceiveBeginPlay
struct ACraneBase_C_ReceiveBeginPlay_Params
{
};

// Function CraneBase.CraneBase_C.ShowIndicator
struct ACraneBase_C_ShowIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CraneBase.CraneBase_C.ExecuteUbergraph_CraneBase
struct ACraneBase_C_ExecuteUbergraph_CraneBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
