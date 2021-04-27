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

// Function BTDecorator_IfHaveChest.BTDecorator_IfHaveChest_C.GetChestItems
struct UBTDecorator_IfHaveChest_C_GetChestItems_Params
{
	TArray<class AItemChest_C*>                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BTDecorator_IfHaveChest.BTDecorator_IfHaveChest_C.GetChestObjective
struct UBTDecorator_IfHaveChest_C_GetChestObjective_Params
{
	TArray<class AItemChest_C*>                        ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function BTDecorator_IfHaveChest.BTDecorator_IfHaveChest_C.PerformConditionCheckAI
struct UBTDecorator_IfHaveChest_C_PerformConditionCheckAI_Params
{
	class AAIController*                               OwnerController;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                       ControlledPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
