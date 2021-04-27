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

// Function InteractControlCamera.InteractControlCamera_C.UpdateCamera
struct AInteractControlCamera_C_UpdateCamera_Params
{
};

// Function InteractControlCamera.InteractControlCamera_C.K2_OnEndViewTarget
struct AInteractControlCamera_C_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractControlCamera.InteractControlCamera_C.K2_OnBecomeViewTarget
struct AInteractControlCamera_C_K2_OnBecomeViewTarget_Params
{
	class APlayerController*                           PC;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractControlCamera.InteractControlCamera_C.RotateYaw
struct AInteractControlCamera_C_RotateYaw_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractControlCamera.InteractControlCamera_C.RotatePitch
struct AInteractControlCamera_C_RotatePitch_Params
{
	float                                              Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function InteractControlCamera.InteractControlCamera_C.ExecuteUbergraph_InteractControlCamera
struct AInteractControlCamera_C_ExecuteUbergraph_InteractControlCamera_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
