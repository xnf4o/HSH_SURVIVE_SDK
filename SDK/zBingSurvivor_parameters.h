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

// Function zBingSurvivor.zBingSurvivor_C.CanGiveItemToCat
struct AzBingSurvivor_C_CanGiveItemToCat_Params
{
	bool                                               CanGiveItemToCat;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function zBingSurvivor.zBingSurvivor_C.InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1
struct AzBingSurvivor_C_InpActEvt_NumPadTwo_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function zBingSurvivor.zBingSurvivor_C.OnEnableAttackCollision
struct AzBingSurvivor_C_OnEnableAttackCollision_Params
{
};

// Function zBingSurvivor.zBingSurvivor_C.OnDisableAttackCollision
struct AzBingSurvivor_C_OnDisableAttackCollision_Params
{
};

// Function zBingSurvivor.zBingSurvivor_C.SendMeleeDistance
struct AzBingSurvivor_C_SendMeleeDistance_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function zBingSurvivor.zBingSurvivor_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AzBingSurvivor_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function zBingSurvivor.zBingSurvivor_C.ReceiveBeginPlay
struct AzBingSurvivor_C_ReceiveBeginPlay_Params
{
};

// Function zBingSurvivor.zBingSurvivor_C.SpawnCat
struct AzBingSurvivor_C_SpawnCat_Params
{
};

// Function zBingSurvivor.zBingSurvivor_C.S_Survivor_ActiveSkill
struct AzBingSurvivor_C_S_Survivor_ActiveSkill_Params
{
};

// Function zBingSurvivor.zBingSurvivor_C.WaitSSReady
struct AzBingSurvivor_C_WaitSSReady_Params
{
};

// Function zBingSurvivor.zBingSurvivor_C.Test
struct AzBingSurvivor_C_Test_Params
{
	bool                                               NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function zBingSurvivor.zBingSurvivor_C.Test2
struct AzBingSurvivor_C_Test2_Params
{
	bool                                               NewParam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function zBingSurvivor.zBingSurvivor_C.GiveNewItemToCat
struct AzBingSurvivor_C_GiveNewItemToCat_Params
{
	struct FS_Pickable                                 ItemToGive;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function zBingSurvivor.zBingSurvivor_C.ExecuteUbergraph_zBingSurvivor
struct AzBingSurvivor_C_ExecuteUbergraph_zBingSurvivor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
