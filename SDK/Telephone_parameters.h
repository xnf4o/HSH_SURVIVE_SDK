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

// Function Telephone.Telephone_C.EnableInteraction
struct ATelephone_C_EnableInteraction_Params
{
};

// Function Telephone.Telephone_C.DisableInteraction
struct ATelephone_C_DisableInteraction_Params
{
};

// Function Telephone.Telephone_C.IsCanInteract
struct ATelephone_C_IsCanInteract_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Telephone.Telephone_C.OnHunterScan
struct ATelephone_C_OnHunterScan_Params
{
};

// Function Telephone.Telephone_C.Interaction
struct ATelephone_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Telephone.Telephone_C.ReceiveBeginPlay
struct ATelephone_C_ReceiveBeginPlay_Params
{
};

// Function Telephone.Telephone_C.OnTimerEnd
struct ATelephone_C_OnTimerEnd_Params
{
};

// Function Telephone.Telephone_C.MulticastOnScan
struct ATelephone_C_MulticastOnScan_Params
{
};

// Function Telephone.Telephone_C.MulticastOnTimerEnd
struct ATelephone_C_MulticastOnTimerEnd_Params
{
};

// Function Telephone.Telephone_C.ShowHunter
struct ATelephone_C_ShowHunter_Params
{
	class ACharacter*                                  hunter;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Telephone.Telephone_C.ExecuteUbergraph_Telephone
struct ATelephone_C_ExecuteUbergraph_Telephone_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
