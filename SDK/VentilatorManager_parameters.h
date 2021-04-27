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

// Function VentilatorManager.VentilatorManager_C.CheckVentilatorCameFrom
struct AVentilatorManager_C_CheckVentilatorCameFrom_Params
{
	class AVentilator_C*                               Ventilator;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Ventilator                               VentilatorData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_Ventilator>                       VentilatorDatas;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FS_Ventilator                               StructOut;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VentilatorManager.VentilatorManager_C.GetIsLift
struct AVentilatorManager_C_GetIsLift_Params
{
	class AVentilator_C*                               FromVentilator;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Ventilator                               Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function VentilatorManager.VentilatorManager_C.GetDestinationVentilator
struct AVentilatorManager_C_GetDestinationVentilator_Params
{
	class AVentilator_C*                               InteractedVentilator;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVentilator_C*                               DestinationVentilator;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_Ventilator                               S_VentilatorList;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VentilatorManager.VentilatorManager_C.UserConstructionScript
struct AVentilatorManager_C_UserConstructionScript_Params
{
};

// Function VentilatorManager.VentilatorManager_C.ReceiveBeginPlay
struct AVentilatorManager_C_ReceiveBeginPlay_Params
{
};

// Function VentilatorManager.VentilatorManager_C.SurvivorTeleportToAnotherVentilator
struct AVentilatorManager_C_SurvivorTeleportToAnotherVentilator_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AVentilator_C*                               InteractedVentilator;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VentilatorManager.VentilatorManager_C.OnLiftSuccess
struct AVentilatorManager_C_OnLiftSuccess_Params
{
};

// Function VentilatorManager.VentilatorManager_C.OnVenCDFinish
struct AVentilatorManager_C_OnVenCDFinish_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function VentilatorManager.VentilatorManager_C.ExecuteUbergraph_VentilatorManager
struct AVentilatorManager_C_ExecuteUbergraph_VentilatorManager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
