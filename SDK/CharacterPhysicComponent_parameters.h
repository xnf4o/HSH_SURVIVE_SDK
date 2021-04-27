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

// Function CharacterPhysicComponent.CharacterPhysicComponent_C.HitReaction
struct UCharacterPhysicComponent_C_HitReaction_Params
{
	struct FName                                       Bone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterPhysicComponent.CharacterPhysicComponent_C.Initialize
struct UCharacterPhysicComponent_C_Initialize_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterPhysicComponent.CharacterPhysicComponent_C.ReceiveTick
struct UCharacterPhysicComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterPhysicComponent.CharacterPhysicComponent_C.CountBlend
struct UCharacterPhysicComponent_C_CountBlend_Params
{
};

// Function CharacterPhysicComponent.CharacterPhysicComponent_C.MultiCastHitReaction
struct UCharacterPhysicComponent_C_MultiCastHitReaction_Params
{
	struct FName                                       Bone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterPhysicComponent.CharacterPhysicComponent_C.ServerHitReaction
struct UCharacterPhysicComponent_C_ServerHitReaction_Params
{
	struct FName                                       Bone;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitLocation;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CharacterPhysicComponent.CharacterPhysicComponent_C.ExecuteUbergraph_CharacterPhysicComponent
struct UCharacterPhysicComponent_C_ExecuteUbergraph_CharacterPhysicComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
