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

// Function ProjectileBase.ProjectileBase_C.OnHitConstruct
struct AProjectileBase_C_OnHitConstruct_Params
{
};

// Function ProjectileBase.ProjectileBase_C.OnDestroy
struct AProjectileBase_C_OnDestroy_Params
{
};

// Function ProjectileBase.ProjectileBase_C.OnAutoDestroy
struct AProjectileBase_C_OnAutoDestroy_Params
{
};

// Function ProjectileBase.ProjectileBase_C.IsCharacterImmune
struct AProjectileBase_C_IsCharacterImmune_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ProjectileBase.ProjectileBase_C.UserConstructionScript
struct AProjectileBase_C_UserConstructionScript_Params
{
};

// Function ProjectileBase.ProjectileBase_C.SpawnSoundEffect
struct AProjectileBase_C_SpawnSoundEffect_Params
{
	class USoundBase*                                  Sound;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProjectileBase.ProjectileBase_C.AddItemSuccess
struct AProjectileBase_C_AddItemSuccess_Params
{
};

// Function ProjectileBase.ProjectileBase_C.ReceiveBeginPlay
struct AProjectileBase_C_ReceiveBeginPlay_Params
{
};

// Function ProjectileBase.ProjectileBase_C.ReceiveTick
struct AProjectileBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProjectileBase.ProjectileBase_C.AutoDestroyActor
struct AProjectileBase_C_AutoDestroyActor_Params
{
};

// Function ProjectileBase.ProjectileBase_C.DestroyActor
struct AProjectileBase_C_DestroyActor_Params
{
};

// Function ProjectileBase.ProjectileBase_C.ClientPlaySoundOnHit
struct AProjectileBase_C_ClientPlaySoundOnHit_Params
{
};

// Function ProjectileBase.ProjectileBase_C.OnHitCharacter
struct AProjectileBase_C_OnHitCharacter_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProjectileBase.ProjectileBase_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature
struct AProjectileBase_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         HitComponent;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  Hit;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function ProjectileBase.ProjectileBase_C.SpawnFXOnHit
struct AProjectileBase_C_SpawnFXOnHit_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProjectileBase.ProjectileBase_C.OnDeactiveCollision
struct AProjectileBase_C_OnDeactiveCollision_Params
{
};

// Function ProjectileBase.ProjectileBase_C.BndEvt__Projectiles_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature
struct AProjectileBase_C_BndEvt__Projectiles_K2Node_ComponentBoundEvent_0_OnSystemFinished__DelegateSignature_Params
{
	class UParticleSystemComponent*                    PSystem;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProjectileBase.ProjectileBase_C.ServerDestroy
struct AProjectileBase_C_ServerDestroy_Params
{
};

// Function ProjectileBase.ProjectileBase_C.ReceiveEndPlay
struct AProjectileBase_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ProjectileBase.ProjectileBase_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature
struct AProjectileBase_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function ProjectileBase.ProjectileBase_C.ExecuteUbergraph_ProjectileBase
struct AProjectileBase_C_ExecuteUbergraph_ProjectileBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
