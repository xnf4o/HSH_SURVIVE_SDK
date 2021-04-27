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

// Function Ventilator.Ventilator_C.GetDelayBeforeTeleport
struct AVentilator_C_GetDelayBeforeTeleport_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ventilator.Ventilator_C.GetCooldown
struct AVentilator_C_GetCooldown_Params
{
	float                                              Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ventilator.Ventilator_C.GetDelayCloseAnimation
struct AVentilator_C_GetDelayCloseAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ventilator.Ventilator_C.GetDelayOpenAnimation
struct AVentilator_C_GetDelayOpenAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ventilator.Ventilator_C.OnFinishTeleport
struct AVentilator_C_OnFinishTeleport_Params
{
};

// Function Ventilator.Ventilator_C.OnStartTeleport
struct AVentilator_C_OnStartTeleport_Params
{
};

// Function Ventilator.Ventilator_C.OnDeactiveInteract
struct AVentilator_C_OnDeactiveInteract_Params
{
};

// Function Ventilator.Ventilator_C.OnActiveInteract
struct AVentilator_C_OnActiveInteract_Params
{
};

// Function Ventilator.Ventilator_C.IsCanInteract
struct AVentilator_C_IsCanInteract_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ventilator.Ventilator_C.InteractSnapLocation
struct AVentilator_C_InteractSnapLocation_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSnapLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LookAtLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsNotAutoCalculateHeight;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Ventilator.Ventilator_C.GetInteractMontage
struct AVentilator_C_GetInteractMontage_Params
{
	class ACharacter*                                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ventilator.Ventilator_C.GetDelayCallAnimation
struct AVentilator_C_GetDelayCallAnimation_Params
{
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ventilator.Ventilator_C.GetTargetTranform
struct AVentilator_C_GetTargetTranform_Params
{
	struct FTransform                                  ReturnValue;                                               // (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Ventilator.Ventilator_C.UserConstructionScript
struct AVentilator_C_UserConstructionScript_Params
{
};

// Function Ventilator.Ventilator_C.VentilatorActive
struct AVentilator_C_VentilatorActive_Params
{
};

// Function Ventilator.Ventilator_C.VentilatorDeactive
struct AVentilator_C_VentilatorDeactive_Params
{
};

// Function Ventilator.Ventilator_C.UseVentilator
struct AVentilator_C_UseVentilator_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ventilator.Ventilator_C.Interaction
struct AVentilator_C_Interaction_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ventilator.Ventilator_C.MulticastPlayOpenAnimation
struct AVentilator_C_MulticastPlayOpenAnimation_Params
{
};

// Function Ventilator.Ventilator_C.MulticastPlayCloseAnimation
struct AVentilator_C_MulticastPlayCloseAnimation_Params
{
};

// Function Ventilator.Ventilator_C.DisableUIOnRole
struct AVentilator_C_DisableUIOnRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ventilator.Ventilator_C.EnableUIOnRole
struct AVentilator_C_EnableUIOnRole_Params
{
	TEnumAsByte<E_Role_E_Role>                         Role;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ventilator.Ventilator_C.ReceiveBeginPlay
struct AVentilator_C_ReceiveBeginPlay_Params
{
};

// Function Ventilator.Ventilator_C.ExecuteUbergraph_Ventilator
struct AVentilator_C_ExecuteUbergraph_Ventilator_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Ventilator.Ventilator_C.OnUseVentilator__DelegateSignature
struct AVentilator_C_OnUseVentilator__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
