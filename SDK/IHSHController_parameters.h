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

// Function IHSHController.IHSHController_C.DisableBlockInputKeys
struct UIHSHController_C_DisableBlockInputKeys_Params
{
	TArray<struct FKey>                                Keys;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IHSHController.IHSHController_C.EnableBlockInputKeys
struct UIHSHController_C_EnableBlockInputKeys_Params
{
};

// Function IHSHController.IHSHController_C.GetIsEnableBlockCamera
struct UIHSHController_C_GetIsEnableBlockCamera_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IHSHController.IHSHController_C.GetIsEnableBlockAction
struct UIHSHController_C_GetIsEnableBlockAction_Params
{
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IHSHController.IHSHController_C.DisableMouseCameraClient
struct UIHSHController_C_DisableMouseCameraClient_Params
{
};

// Function IHSHController.IHSHController_C.EnableMouseCameraClient
struct UIHSHController_C_EnableMouseCameraClient_Params
{
};

// Function IHSHController.IHSHController_C.DisableActionClient
struct UIHSHController_C_DisableActionClient_Params
{
};

// Function IHSHController.IHSHController_C.EnableActionClient
struct UIHSHController_C_EnableActionClient_Params
{
};

// Function IHSHController.IHSHController_C.DisableMovementClient
struct UIHSHController_C_DisableMovementClient_Params
{
};

// Function IHSHController.IHSHController_C.EnableMovementClient
struct UIHSHController_C_EnableMovementClient_Params
{
};

// Function IHSHController.IHSHController_C.DisableInputClient
struct UIHSHController_C_DisableInputClient_Params
{
};

// Function IHSHController.IHSHController_C.EnableInputClient
struct UIHSHController_C_EnableInputClient_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
