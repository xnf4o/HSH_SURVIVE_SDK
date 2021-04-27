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

// Function StatusWidgetComponent.StatusWidgetComponent_C.FilterDeactiveSfxIndex
struct UStatusWidgetComponent_C_FilterDeactiveSfxIndex_Params
{
	TArray<class UAudioComponent*>                     ActiveSFX;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class USoundBase*>                          SoundEffect;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UAudioComponent*                             AudioComponent;                                            // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.RefreshSFX
struct UStatusWidgetComponent_C_RefreshSFX_Params
{
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.FilterDeactiveParticleIndex
struct UStatusWidgetComponent_C_FilterDeactiveParticleIndex_Params
{
	TArray<class UParticleSystemComponent*>            ActiveParticle;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UParticleSystem*>                     Particle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UParticleSystemComponent*                    ParticleComponent;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.FillContent
struct UStatusWidgetComponent_C_FillContent_Params
{
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.Refresh
struct UStatusWidgetComponent_C_Refresh_Params
{
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.UpdateParticle
struct UStatusWidgetComponent_C_UpdateParticle_Params
{
	TArray<struct FGameplayTagContainer>               Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UParticleSystem*>                     Particle;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class USoundBase*>                          SoundEffect;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.SpawnParticleStatus
struct UStatusWidgetComponent_C_SpawnParticleStatus_Params
{
	class UParticleSystem*                             Effect;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Attach;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.CheckTagIconsStatus
struct UStatusWidgetComponent_C_CheckTagIconsStatus_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTexture2D*>                          Icons;                                                     // (Parm, OutParm, ZeroConstructor)
	TArray<TEnumAsByte<E_TagStatusMode_E_TagStatusMode>> Modes;                                                     // (Parm, OutParm, ZeroConstructor)
	TArray<struct FS_TagStatus>                        Data;                                                      // (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.CheckParticleStatus
struct UStatusWidgetComponent_C_CheckParticleStatus_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayTagContainer>               Tag;                                                       // (Parm, OutParm, ZeroConstructor)
	TArray<class UParticleSystem*>                     Particle;                                                  // (Parm, OutParm, ZeroConstructor)
	TArray<struct FName>                               Socket;                                                    // (Parm, OutParm, ZeroConstructor)
	TArray<class USoundBase*>                          SoundEffect;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.CheckTagStatus
struct UStatusWidgetComponent_C_CheckTagStatus_Params
{
	class AHSHCharacterBase*                           Character;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Return;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.OnWaterBinding
struct UStatusWidgetComponent_C_OnWaterBinding_Params
{
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.WaterBindingRemove
struct UStatusWidgetComponent_C_WaterBindingRemove_Params
{
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.CheckHandleWidget
struct UStatusWidgetComponent_C_CheckHandleWidget_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.OnHandleWidget
struct UStatusWidgetComponent_C_OnHandleWidget_Params
{
	struct FName                                       Name;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.MulticastSpawnParticleAndSFX
struct UStatusWidgetComponent_C_MulticastSpawnParticleAndSFX_Params
{
	class UParticleSystem*                             Effect;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Socket;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Attach;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class USoundBase*                                  SoundEffect;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.SetVisibility
struct UStatusWidgetComponent_C_SetVisibility_Params
{
	bool                                               bIsVisibility;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.MulticastSetVisibility
struct UStatusWidgetComponent_C_MulticastSetVisibility_Params
{
	bool                                               IsVisibility;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.ReceiveBeginPlay
struct UStatusWidgetComponent_C_ReceiveBeginPlay_Params
{
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.ReceiveTick
struct UStatusWidgetComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.ReceiveEndPlay
struct UStatusWidgetComponent_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.CheckTagEffect
struct UStatusWidgetComponent_C_CheckTagEffect_Params
{
	struct FName                                       Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.OnGameplayEffectApply
struct UStatusWidgetComponent_C_OnGameplayEffectApply_Params
{
	struct FGameplayTagContainer                       TagsContainer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function StatusWidgetComponent.StatusWidgetComponent_C.ExecuteUbergraph_StatusWidgetComponent
struct UStatusWidgetComponent_C_ExecuteUbergraph_StatusWidgetComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
