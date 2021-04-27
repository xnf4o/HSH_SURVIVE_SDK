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

// Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.AssignLootDropCamera
struct UHSURMenuCameraManagerComponent_C_AssignLootDropCamera_Params
{
	TEnumAsByte<E_MenuState_E_MenuState>               State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.FindCameraState
struct UHSURMenuCameraManagerComponent_C_FindCameraState_Params
{
	TArray<struct FSMenuCameraState>                   Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TEnumAsByte<E_MenuState_E_MenuState>               State;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFindSuccess;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.OnLoaded_0E2CC129418781613D53ADA3F4D9C9F5
struct UHSURMenuCameraManagerComponent_C_OnLoaded_0E2CC129418781613D53ADA3F4D9C9F5_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.ReceiveBeginPlay
struct UHSURMenuCameraManagerComponent_C_ReceiveBeginPlay_Params
{
};

// Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.BlendCamera
struct UHSURMenuCameraManagerComponent_C_BlendCamera_Params
{
	TEnumAsByte<E_MenuState_E_MenuState>               Move_to_Camera;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EViewTargetBlendFunction>       BlendFunc;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendExp;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLockOutgoing;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HSURMenuCameraManagerComponent.HSURMenuCameraManagerComponent_C.ExecuteUbergraph_HSURMenuCameraManagerComponent
struct UHSURMenuCameraManagerComponent_C_ExecuteUbergraph_HSURMenuCameraManagerComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
