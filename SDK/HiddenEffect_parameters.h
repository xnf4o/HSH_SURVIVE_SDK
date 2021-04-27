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

// Function HiddenEffect.HiddenEffect_C.RefreshPostProcess
struct AHiddenEffect_C_RefreshPostProcess_Params
{
};

// Function HiddenEffect.HiddenEffect_C.CheckCondition
struct AHiddenEffect_C_CheckCondition_Params
{
	TArray<class ASurvivorBase_C*>                     SurvivorList;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Height;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCantSpecter;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HiddenEffect.HiddenEffect_C.CheckHeight
struct AHiddenEffect_C_CheckHeight_Params
{
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HiddenEffect.HiddenEffect_C.UserConstructionScript
struct AHiddenEffect_C_UserConstructionScript_Params
{
};

// Function HiddenEffect.HiddenEffect_C.Timeline_0__FinishedFunc
struct AHiddenEffect_C_Timeline_0__FinishedFunc_Params
{
};

// Function HiddenEffect.HiddenEffect_C.Timeline_0__UpdateFunc
struct AHiddenEffect_C_Timeline_0__UpdateFunc_Params
{
};

// Function HiddenEffect.HiddenEffect_C.PlayAnimation
struct AHiddenEffect_C_PlayAnimation_Params
{
};

// Function HiddenEffect.HiddenEffect_C.EndAnimation
struct AHiddenEffect_C_EndAnimation_Params
{
};

// Function HiddenEffect.HiddenEffect_C.Initialize
struct AHiddenEffect_C_Initialize_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddenEffect.HiddenEffect_C.BndEvt__SphereEffect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AHiddenEffect_C_BndEvt__SphereEffect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function HiddenEffect.HiddenEffect_C.BndEvt__SphereEffect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct AHiddenEffect_C_BndEvt__SphereEffect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddenEffect.HiddenEffect_C.ReceiveTick
struct AHiddenEffect_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HiddenEffect.HiddenEffect_C.SetOnCanActivate
struct AHiddenEffect_C_SetOnCanActivate_Params
{
};

// Function HiddenEffect.HiddenEffect_C.SetOnCantActivate
struct AHiddenEffect_C_SetOnCantActivate_Params
{
};

// Function HiddenEffect.HiddenEffect_C.ExecuteUbergraph_HiddenEffect
struct AHiddenEffect_C_ExecuteUbergraph_HiddenEffect_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
