﻿#pragma once

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

// Function ControlRig.ControlRig.SetGlobalTransform
struct UControlRig_SetGlobalTransform_Params
{
	struct FName                                       JointName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  InTransform;                                               // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRig.GetGlobalTransform
struct UControlRig_GetGlobalTransform_Params
{
	struct FName                                       JointName;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRig.GetDeltaTime
struct UControlRig_GetDeltaTime_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRigComponent.OnPreInitialize
struct UControlRigComponent_OnPreInitialize_Params
{
};

// Function ControlRig.ControlRigComponent.OnPreEvaluate
struct UControlRigComponent_OnPreEvaluate_Params
{
};

// Function ControlRig.ControlRigComponent.OnPostInitialize
struct UControlRigComponent_OnPostInitialize_Params
{
};

// Function ControlRig.ControlRigComponent.OnPostEvaluate
struct UControlRigComponent_OnPostEvaluate_Params
{
};

// Function ControlRig.ControlRigComponent.BP_GetControlRig
struct UControlRigComponent_BP_GetControlRig_Params
{
	class UControlRig*                                 ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRigControl.OnTransformChanged
struct AControlRigControl_OnTransformChanged_Params
{
	struct FTransform                                  NewTransform;                                              // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRigControl.OnSelectionChanged
struct AControlRigControl_OnSelectionChanged_Params
{
	bool                                               bIsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRigControl.OnManipulatingChanged
struct AControlRigControl_OnManipulatingChanged_Params
{
	bool                                               bIsManipulating;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRigControl.OnHoveredChanged
struct AControlRigControl_OnHoveredChanged_Params
{
	bool                                               bIsSelected;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function ControlRig.ControlRigControl.OnEnabledChanged
struct AControlRigControl_OnEnabledChanged_Params
{
	bool                                               bIsEnabled;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
