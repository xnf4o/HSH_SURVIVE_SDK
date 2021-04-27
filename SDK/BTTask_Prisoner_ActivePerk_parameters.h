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

// Function BTTask_Prisoner_ActivePerk.BTTask_Prisoner_ActivePerk_C.IsCanActivePerk
struct UBTTask_Prisoner_ActivePerk_C_IsCanActivePerk_Params
{
	bool                                               CanActivePerk;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BTTask_Prisoner_ActivePerk.BTTask_Prisoner_ActivePerk_C.ReceiveExecuteAI
struct UBTTask_Prisoner_ActivePerk_C_ReceiveExecuteAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BTTask_Prisoner_ActivePerk.BTTask_Prisoner_ActivePerk_C.ExecuteUbergraph_BTTask_Prisoner_ActivePerk
struct UBTTask_Prisoner_ActivePerk_C_ExecuteUbergraph_BTTask_Prisoner_ActivePerk_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
