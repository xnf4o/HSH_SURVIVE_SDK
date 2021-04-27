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

// Function PerkHandleComponent.PerkHandleComponent_C.ResetCountTag
struct UPerkHandleComponent_C_ResetCountTag_Params
{
	struct FGameplayTag                                Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleComponent.PerkHandleComponent_C.AddedCountTag
struct UPerkHandleComponent_C_AddedCountTag_Params
{
	struct FGameplayTag                                Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleComponent.PerkHandleComponent_C.GetCountTag
struct UPerkHandleComponent_C_GetCountTag_Params
{
	struct FGameplayTag                                Key;                                                       // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	int                                                Value;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleComponent.PerkHandleComponent_C.TryApplyAura
struct UPerkHandleComponent_C_TryApplyAura_Params
{
	class AHSHCharacterBase*                           Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_AuraData                                 S_AuraData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleComponent.PerkHandleComponent_C.IsCharacterHasTagContainer
struct UPerkHandleComponent_C_IsCharacterHasTagContainer_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       Owning_Tag_Container;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Has;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleComponent.PerkHandleComponent_C.IsCharacterInDistance
struct UPerkHandleComponent_C_IsCharacterInDistance_Params
{
	class AHSHCharacterBase*                           Owner;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           Target;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Return;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleComponent.PerkHandleComponent_C.IsCharacterHasTagQuery
struct UPerkHandleComponent_C_IsCharacterHasTagQuery_Params
{
	class AHSHCharacterBase*                           hshcharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagQuery                           Owning_Tag_Query;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Has;                                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PerkHandleComponent.PerkHandleComponent_C.GetCharactersWithTag
struct UPerkHandleComponent_C_GetCharactersWithTag_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	TArray<class AHSHCharacterBase*>                   CharactersWithTag;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function PerkHandleComponent.PerkHandleComponent_C.CheckPerkAura
struct UPerkHandleComponent_C_CheckPerkAura_Params
{
};

// Function PerkHandleComponent.PerkHandleComponent_C.CheckPerkHandleTag
struct UPerkHandleComponent_C_CheckPerkHandleTag_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FPerkHandleData                             Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function PerkHandleComponent.PerkHandleComponent_C.OnFindCharactersWithTag
struct UPerkHandleComponent_C_OnFindCharactersWithTag_Params
{
	struct FGameplayTag                                Tag;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FPerkHandleData                             Data;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AHSHCharacterBase*>                   Characters;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PerkHandleComponent.PerkHandleComponent_C.ReceiveTick
struct UPerkHandleComponent_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function PerkHandleComponent.PerkHandleComponent_C.ReceiveBeginPlay
struct UPerkHandleComponent_C_ReceiveBeginPlay_Params
{
};

// Function PerkHandleComponent.PerkHandleComponent_C.FindAllCharacter
struct UPerkHandleComponent_C_FindAllCharacter_Params
{
};

// Function PerkHandleComponent.PerkHandleComponent_C.ExecuteUbergraph_PerkHandleComponent
struct UPerkHandleComponent_C_ExecuteUbergraph_PerkHandleComponent_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
