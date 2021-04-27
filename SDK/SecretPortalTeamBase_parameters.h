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

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnRepIsProgress
struct ASecretPortalTeamBase_C_OnRepIsProgress_Params
{
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnRep_bIsProgress?
struct ASecretPortalTeamBase_C_OnRep_bIsProgress__Params
{
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnRep_bPortalActive
struct ASecretPortalTeamBase_C_OnRep_bPortalActive_Params
{
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.GetInteractMontage
struct ASecretPortalTeamBase_C_GetInteractMontage_Params
{
	class ACharacter*                                  Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                Montage;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSectionName;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OpenDoorAnimation
struct ASecretPortalTeamBase_C_OpenDoorAnimation_Params
{
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.ByPassProgress
struct ASecretPortalTeamBase_C_ByPassProgress_Params
{
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.GetInteractSlateBrush
struct ASecretPortalTeamBase_C_GetInteractSlateBrush_Params
{
	class AActor*                                      Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                                 SlateBrushNormal;                                          // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushHover;                                           // (Parm, OutParm)
	struct FSlateBrush                                 SlateBrushInteract;                                        // (Parm, OutParm)
	struct FText                                       SlateText;                                                 // (Parm, OutParm)
	bool                                               NotShowButton;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.IsCanHelp?
struct ASecretPortalTeamBase_C_IsCanHelp__Params
{
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.InteractSnapLocation
struct ASecretPortalTeamBase_C_InteractSnapLocation_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSnapLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Location;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LookAtLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsNotAutoCalculateHeight;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.CanUseProgress
struct ASecretPortalTeamBase_C_CanUseProgress_Params
{
	bool                                               UseProgress;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.GetProgressTime
struct ASecretPortalTeamBase_C_GetProgressTime_Params
{
	bool                                               IsReturnSuccess;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              progressTime;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.IsCanSkillCheck?
struct ASecretPortalTeamBase_C_IsCanSkillCheck__Params
{
	bool                                               IsImprement;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCan;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnPlayerExit
struct ASecretPortalTeamBase_C_OnPlayerExit_Params
{
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OpenPortal
struct ASecretPortalTeamBase_C_OpenPortal_Params
{
	bool                                               bAutoActive;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnFinishProgress
struct ASecretPortalTeamBase_C_OnFinishProgress_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.MulticastportalExit
struct ASecretPortalTeamBase_C_MulticastportalExit_Params
{
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnPortalOpen
struct ASecretPortalTeamBase_C_OnPortalOpen_Params
{
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.PlayerExit
struct ASecretPortalTeamBase_C_PlayerExit_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.ExecuteUbergraph_SecretPortalTeamBase
struct ASecretPortalTeamBase_C_ExecuteUbergraph_SecretPortalTeamBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnOpenPortal__DelegateSignature
struct ASecretPortalTeamBase_C_OnOpenPortal__DelegateSignature_Params
{
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnExitPortalTutorial__DelegateSignature
struct ASecretPortalTeamBase_C_OnExitPortalTutorial__DelegateSignature_Params
{
};

// Function SecretPortalTeamBase.SecretPortalTeamBase_C.OnExitPortal__DelegateSignature
struct ASecretPortalTeamBase_C_OnExitPortal__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
