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

// Function OutlineComponent.OutlineComponent_C.IsChildClassOfArray?
struct UOutlineComponent_C_IsChildClassOfArray__Params
{
	class UObject*                                     TestActor;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              ClassFillter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsChildClass;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OutlineComponent.OutlineComponent_C.IsIsUseOutlineForInteraction?
struct UOutlineComponent_C_IsIsUseOutlineForInteraction__Params
{
	bool                                               bIsUseOutlineForInteraction_;                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OutlineComponent.OutlineComponent_C.CheckInteractActor
struct UOutlineComponent_C_CheckInteractActor_Params
{
};

// Function OutlineComponent.OutlineComponent_C.FillterClass
struct UOutlineComponent_C_FillterClass_Params
{
	class UClass*                                      ClassTarget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ClassFillter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPass_;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OutlineComponent.OutlineComponent_C.GetOverlapActors
struct UOutlineComponent_C_GetOverlapActors_Params
{
	class USphereComponent*                            Collision;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.RemoveFromArray
struct UOutlineComponent_C_RemoveFromArray_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.FillterHideOutline
struct UOutlineComponent_C_FillterHideOutline_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.FillterShowOutline
struct UOutlineComponent_C_FillterShowOutline_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.RefreshActorsList
struct UOutlineComponent_C_RefreshActorsList_Params
{
};

// Function OutlineComponent.OutlineComponent_C.AddedToArray
struct UOutlineComponent_C_AddedToArray_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.FindInHeightRange
struct UOutlineComponent_C_FindInHeightRange_Params
{
	class USceneComponent*                             Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function OutlineComponent.OutlineComponent_C.CheckMethodNearCharacter
struct UOutlineComponent_C_CheckMethodNearCharacter_Params
{
};

// Function OutlineComponent.OutlineComponent_C.FillterActorsArray
struct UOutlineComponent_C_FillterActorsArray_Params
{
	TArray<class AActor*>                              In;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              Out;                                                       // (Parm, OutParm, ZeroConstructor)
};

// Function OutlineComponent.OutlineComponent_C.GetNearCenterOfViewport
struct UOutlineComponent_C_GetNearCenterOfViewport_Params
{
	class UCameraComponent*                            Camera;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NearValue;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.FindLenght
struct UOutlineComponent_C_FindLenght_Params
{
	class USceneComponent*                             ActorA;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ActorB;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Lenght;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.Uninitialized
struct UOutlineComponent_C_Uninitialized_Params
{
};

// Function OutlineComponent.OutlineComponent_C.EnableUIOnObject
struct UOutlineComponent_C_EnableUIOnObject_Params
{
	class UObject*                                     Object;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.DisableUIOnObject
struct UOutlineComponent_C_DisableUIOnObject_Params
{
	class UObject*                                     Object;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.VisibleIndicator
struct UOutlineComponent_C_VisibleIndicator_Params
{
	bool                                               IsShow_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.VisibleOutline
struct UOutlineComponent_C_VisibleOutline_Params
{
	bool                                               IsShow_;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.CheckingInterectionInCamera
struct UOutlineComponent_C_CheckingInterectionInCamera_Params
{
};

// Function OutlineComponent.OutlineComponent_C.Initialize
struct UOutlineComponent_C_Initialize_Params
{
	class UCameraComponent*                            Camera;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             pointRoot;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            Collision;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.ReceiveTick
struct UOutlineComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function OutlineComponent.OutlineComponent_C.ExecuteUbergraph_OutlineComponent
struct UOutlineComponent_C_ExecuteUbergraph_OutlineComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
