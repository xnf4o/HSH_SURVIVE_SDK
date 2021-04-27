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

// Function TrapActorSigilScroll.TrapActorSigilScroll_C.FindLaunchDirection
struct ATrapActorSigilScroll_C_FindLaunchDirection_Params
{
	class AActor*                                      Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TrapActorSigilScroll.TrapActorSigilScroll_C.IsCanInteract
struct ATrapActorSigilScroll_C_IsCanInteract_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TrapActorSigilScroll.TrapActorSigilScroll_C.UserConstructionScript
struct ATrapActorSigilScroll_C_UserConstructionScript_Params
{
};

// Function TrapActorSigilScroll.TrapActorSigilScroll_C.ReceiveBeginPlay
struct ATrapActorSigilScroll_C_ReceiveBeginPlay_Params
{
};

// Function TrapActorSigilScroll.TrapActorSigilScroll_C.InitOverride
struct ATrapActorSigilScroll_C_InitOverride_Params
{
	TArray<class ATrapTargetActor_C*>                  Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function TrapActorSigilScroll.TrapActorSigilScroll_C.AddedItemSuccess
struct ATrapActorSigilScroll_C_AddedItemSuccess_Params
{
};

// Function TrapActorSigilScroll.TrapActorSigilScroll_C.TalismanDestroy
struct ATrapActorSigilScroll_C_TalismanDestroy_Params
{
};

// Function TrapActorSigilScroll.TrapActorSigilScroll_C.BlockSurvivor
struct ATrapActorSigilScroll_C_BlockSurvivor_Params
{
};

// Function TrapActorSigilScroll.TrapActorSigilScroll_C.ExecuteUbergraph_TrapActorSigilScroll
struct ATrapActorSigilScroll_C_ExecuteUbergraph_TrapActorSigilScroll_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
