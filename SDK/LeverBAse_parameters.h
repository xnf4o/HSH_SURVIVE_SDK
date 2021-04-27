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

// Function LeverBAse.LeverBase_C.EndCooldown
struct ALeverBase_C_EndCooldown_Params
{
};

// Function LeverBAse.LeverBase_C.StartCooldown
struct ALeverBase_C_StartCooldown_Params
{
};

// Function LeverBAse.LeverBase_C.IsCooldown
struct ALeverBase_C_IsCooldown_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LeverBAse.LeverBase_C.IsCanInteract
struct ALeverBase_C_IsCanInteract_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LeverBAse.LeverBase_C.IsLeverOn
struct ALeverBase_C_IsLeverOn_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function LeverBAse.LeverBase_C.Interaction
struct ALeverBase_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LeverBAse.LeverBase_C.OnServerSwitchChange
struct ALeverBase_C_OnServerSwitchChange_Params
{
	bool                                               bIsOn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LeverBAse.LeverBase_C.ReceiveBeginPlay
struct ALeverBase_C_ReceiveBeginPlay_Params
{
};

// Function LeverBAse.LeverBase_C.ShowIndicator
struct ALeverBase_C_ShowIndicator_Params
{
	class AActor*                                      PlayerCharacter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function LeverBAse.LeverBase_C.ExecuteUbergraph_LeverBase
struct ALeverBase_C_ExecuteUbergraph_LeverBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
