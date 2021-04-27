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

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetIsOnSpecterMode
struct UIngamePlayerDataHunter_C_GetIsOnSpecterMode_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetSpecterLimitTimeRemain
struct UIngamePlayerDataHunter_C_GetSpecterLimitTimeRemain_Params
{
	float                                              SpecterLimitTimeRemain;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpecterLimitDuration;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetPassivePerkUnique
struct UIngamePlayerDataHunter_C_GetPassivePerkUnique_Params
{
	struct FPrimaryAssetId                             PassivePerkUnique;                                         // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.FilterPerkApply
struct UIngamePlayerDataHunter_C_FilterPerkApply_Params
{
	struct FGameplayTag                                TagApply;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             PerkApply;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       RecieveTag;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.OnPPApply
struct UIngamePlayerDataHunter_C_OnPPApply_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetSelectionPassivePerks
struct UIngamePlayerDataHunter_C_GetSelectionPassivePerks_Params
{
	struct FPrimaryAssetId                             PerkPassiveSlot_2;                                         // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             PerkPassiveSlot_3;                                         // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetPPCooldown
struct UIngamePlayerDataHunter_C_GetPPCooldown_Params
{
	struct FPrimaryAssetId                             PerkSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                              TimeRemainingPerk;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Cooldown_DurationPerk;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCooldown;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.FindHunterSlot
struct UIngamePlayerDataHunter_C_FindHunterSlot_Params
{
	class UObject*                                     ChracterItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_HunterSlot>                       HunterSlots;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FS_HunterSlot                               Slot;                                                      // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                               bFound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.IsSpecterCooldown?
struct UIngamePlayerDataHunter_C_IsSpecterCooldown__Params
{
	bool                                               IsTeleportCooldown;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.IsImmunityCooldown?
struct UIngamePlayerDataHunter_C_IsImmunityCooldown__Params
{
	bool                                               IsImmuneCooldown;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.IsPerkCooldown?
struct UIngamePlayerDataHunter_C_IsPerkCooldown__Params
{
	bool                                               IsPerkCooldown;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetText_Charge
struct UIngamePlayerDataHunter_C_GetText_Charge_Params
{
	struct FText                                       ChargeValue;                                               // (Parm, OutParm)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetIsTraped
struct UIngamePlayerDataHunter_C_GetIsTraped_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetHP_Percent
struct UIngamePlayerDataHunter_C_GetHP_Percent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetSpecterBlock
struct UIngamePlayerDataHunter_C_GetSpecterBlock_Params
{
	bool                                               bIsBlock;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetSpecterCooldown
struct UIngamePlayerDataHunter_C_GetSpecterCooldown_Params
{
	float                                              TimeRemaining;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetImmuneActive
struct UIngamePlayerDataHunter_C_GetImmuneActive_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetImmunity_CD_Percent
struct UIngamePlayerDataHunter_C_GetImmunity_CD_Percent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetImmunityCooldown
struct UIngamePlayerDataHunter_C_GetImmunityCooldown_Params
{
	float                                              TimeRemaining_Immunity;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Cooldown_Duration_Immunity;                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetActivePerkCooldown
struct UIngamePlayerDataHunter_C_GetActivePerkCooldown_Params
{
	float                                              TimeRemainingPerk;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Cooldown_DurationPerk;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetUIPerks
struct UIngamePlayerDataHunter_C_GetUIPerks_Params
{
	struct FSlateBrush                                 ActivePerk;                                                // (Parm, OutParm)
	struct FSlateBrush                                 PassiveUniquePerk;                                         // (Parm, OutParm)
	struct FSlateBrush                                 Perk1;                                                     // (Parm, OutParm)
	struct FSlateBrush                                 Perk2;                                                     // (Parm, OutParm)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetPerkCooldownPercent
struct UIngamePlayerDataHunter_C_GetPerkCooldownPercent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.UpdatePerkCharge
struct UIngamePlayerDataHunter_C_UpdatePerkCharge_Params
{
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetPerkChargeToText
struct UIngamePlayerDataHunter_C_GetPerkChargeToText_Params
{
	struct FText                                       Charge;                                                    // (Parm, OutParm)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.UpdateCooldown
struct UIngamePlayerDataHunter_C_UpdateCooldown_Params
{
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.UpdateScreenFX
struct UIngamePlayerDataHunter_C_UpdateScreenFX_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.TakeDamage
struct UIngamePlayerDataHunter_C_TakeDamage_Params
{
	class AHSHCharacterBase*                           InstigatorCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           OwnerCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dmg;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.TryGetHunter
struct UIngamePlayerDataHunter_C_TryGetHunter_Params
{
	class AHunterBase_C*                               hunter;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.Tick
struct UIngamePlayerDataHunter_C_Tick_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.Construct
struct UIngamePlayerDataHunter_C_Construct_Params
{
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.ExecuteUbergraph_IngamePlayerDataHunter
struct UIngamePlayerDataHunter_C_ExecuteUbergraph_IngamePlayerDataHunter_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.OnPerkApply__DelegateSignature
struct UIngamePlayerDataHunter_C_OnPerkApply__DelegateSignature_Params
{
	int                                                PerkSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.OnDecreaseScreenOpacity__DelegateSignature
struct UIngamePlayerDataHunter_C_OnDecreaseScreenOpacity__DelegateSignature_Params
{
};

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.OnTakeDamage__DelegateSignature
struct UIngamePlayerDataHunter_C_OnTakeDamage__DelegateSignature_Params
{
	class AHSHCharacterBase*                           InstigatorCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHSHCharacterBase*                           OwnerCharacter;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Dmg;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
