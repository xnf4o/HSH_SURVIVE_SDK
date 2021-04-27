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

// Function BGMStateController.BGMStateController_C.OnRitualStateChanged
struct ABGMStateController_C_OnRitualStateChanged_Params
{
	int                                                State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BGMStateController.BGMStateController_C.ChangeBGMState
struct ABGMStateController_C_ChangeBGMState_Params
{
	class USoundBase*                                  NewSound;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BGMStateController.BGMStateController_C.MulticastBGMSD
struct ABGMStateController_C_MulticastBGMSD_Params
{
};

// Function BGMStateController.BGMStateController_C.ServerBGMSD
struct ABGMStateController_C_ServerBGMSD_Params
{
};

// Function BGMStateController.BGMStateController_C.StopBGM
struct ABGMStateController_C_StopBGM_Params
{
};

// Function BGMStateController.BGMStateController_C.ExecuteUbergraph_BGMStateController
struct ABGMStateController_C_ExecuteUbergraph_BGMStateController_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
