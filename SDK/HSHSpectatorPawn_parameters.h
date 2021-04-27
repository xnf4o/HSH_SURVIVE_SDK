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

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.GetterViewTarget
struct AHSHSpectatorPawn_C_GetterViewTarget_Params
{
	class APawn*                                       Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.FilterSurvivor
struct AHSHSpectatorPawn_C_FilterSurvivor_Params
{
	TArray<class AHSHCharacterBase*>                   Characters;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AHSHCharacterBase*>                   Return;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.RefreshCharacterList
struct AHSHSpectatorPawn_C_RefreshCharacterList_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.OnRep_NetUpdate
struct AHSHSpectatorPawn_C_OnRep_NetUpdate_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.UpdateLocation
struct AHSHSpectatorPawn_C_UpdateLocation_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.EnterSpectator
struct AHSHSpectatorPawn_C_EnterSpectator_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.UpdateButton
struct AHSHSpectatorPawn_C_UpdateButton_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_E_K2Node_InputKeyEvent_5
struct AHSHSpectatorPawn_C_InpActEvt_E_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_E_K2Node_InputKeyEvent_4
struct AHSHSpectatorPawn_C_InpActEvt_E_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_3
struct AHSHSpectatorPawn_C_InpActEvt_Q_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_Q_K2Node_InputKeyEvent_2
struct AHSHSpectatorPawn_C_InpActEvt_Q_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_2
struct AHSHSpectatorPawn_C_InpActEvt_Spectator_ChangeCameraLeft_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_1
struct AHSHSpectatorPawn_C_InpActEvt_Spectator_ChangeCameraRight_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_1
struct AHSHSpectatorPawn_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InitSpectator
struct AHSHSpectatorPawn_C_InitSpectator_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.NextSpectator
struct AHSHSpectatorPawn_C_NextSpectator_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.PreviousSpectator
struct AHSHSpectatorPawn_C_PreviousSpectator_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.ToggleChangeMode
struct AHSHSpectatorPawn_C_ToggleChangeMode_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.EnterFreeMode
struct AHSHSpectatorPawn_C_EnterFreeMode_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.EnterSpectatorMode
struct AHSHSpectatorPawn_C_EnterSpectatorMode_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.QuitGame
struct AHSHSpectatorPawn_C_QuitGame_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80
struct AHSHSpectatorPawn_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_80_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91
struct AHSHSpectatorPawn_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_91_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_1
struct AHSHSpectatorPawn_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_1_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_2
struct AHSHSpectatorPawn_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_2_Params
{
	float                                              AxisValue;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.ReceiveTick
struct AHSHSpectatorPawn_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.ReceiveBeginPlay
struct AHSHSpectatorPawn_C_ReceiveBeginPlay_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.ReceivePossessed
struct AHSHSpectatorPawn_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.ReceiveUnpossessed
struct AHSHSpectatorPawn_C_ReceiveUnpossessed_Params
{
	class AController*                                 OldController;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.EnableClientInput
struct AHSHSpectatorPawn_C_EnableClientInput_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.DisableClientInput
struct AHSHSpectatorPawn_C_DisableClientInput_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.OnCharacterChange
struct AHSHSpectatorPawn_C_OnCharacterChange_Params
{
};

// Function HSHSpectatorPawn.HSHSpectatorPawn_C.ExecuteUbergraph_HSHSpectatorPawn
struct AHSHSpectatorPawn_C_ExecuteUbergraph_HSHSpectatorPawn_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
