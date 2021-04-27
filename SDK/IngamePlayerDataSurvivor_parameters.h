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

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetPPCooldown
struct UIngamePlayerDataSurvivor_C_GetPPCooldown_Params
{
	struct FPrimaryAssetId                             PerkSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                              TimeRemainingPerk;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Cooldown_DurationPerk;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsCooldown;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsReady;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetSelectionPerk
struct UIngamePlayerDataSurvivor_C_GetSelectionPerk_Params
{
	struct FPrimaryAssetId                             PerkPassiveSlot_2;                                         // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPrimaryAssetId                             PerkPassiveSlot_3;                                         // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.FindSurvivorSlot
struct UIngamePlayerDataSurvivor_C_FindSurvivorSlot_Params
{
	class UObject*                                     characteritem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_SurvivorSlot>                     SurvivorSlots;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FS_SurvivorSlot                             Slot;                                                      // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                               Found;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Array_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetUIPerk
struct UIngamePlayerDataSurvivor_C_GetUIPerk_Params
{
	struct FSlateBrush                                 ActivePerk;                                                // (Parm, OutParm)
	struct FSlateBrush                                 Perk1;                                                     // (Parm, OutParm)
	struct FSlateBrush                                 Perk2;                                                     // (Parm, OutParm)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.TryGetInteractComponent
struct UIngamePlayerDataSurvivor_C_TryGetInteractComponent_Params
{
	class UInteractComponent_C*                        InteractComponent;                                         // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetCooldownItem
struct UIngamePlayerDataSurvivor_C_GetCooldownItem_Params
{
	float                                              TimeRemaining;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetDrinkEffect
struct UIngamePlayerDataSurvivor_C_GetDrinkEffect_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetCurrentPickItem
struct UIngamePlayerDataSurvivor_C_GetCurrentPickItem_Params
{
	struct FS_Pickable                                 CurrentPickItem;                                           // (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetDurability
struct UIngamePlayerDataSurvivor_C_GetDurability_Params
{
	struct FText                                       ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetStamina_Percent
struct UIngamePlayerDataSurvivor_C_GetStamina_Percent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetHP_Percent
struct UIngamePlayerDataSurvivor_C_GetHP_Percent_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.GetQuestDetail
struct UIngamePlayerDataSurvivor_C_GetQuestDetail_Params
{
	struct FString                                     Return;                                                    // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.MakeQuestDetails
struct UIngamePlayerDataSurvivor_C_MakeQuestDetails_Params
{
	TArray<struct FString>                             Array;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FString                                     Str;                                                       // (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.UpdateQuestDetailsNew
struct UIngamePlayerDataSurvivor_C_UpdateQuestDetailsNew_Params
{
	TArray<struct FS_QuestDetail>                      QuestDetailsNew;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.UpdateQuestDetails
struct UIngamePlayerDataSurvivor_C_UpdateQuestDetails_Params
{
	TArray<struct FString>                             QuestDetails;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.SetItem
struct UIngamePlayerDataSurvivor_C_SetItem_Params
{
	bool                                               bHaveItem_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UHSHPickableItem*                            PickableItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.UpdateScreenFX
struct UIngamePlayerDataSurvivor_C_UpdateScreenFX_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.TakeDamage
struct UIngamePlayerDataSurvivor_C_TakeDamage_Params
{
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.TryGetSurvivor
struct UIngamePlayerDataSurvivor_C_TryGetSurvivor_Params
{
	class ASurvivorBase_C*                             survivor;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.Construct
struct UIngamePlayerDataSurvivor_C_Construct_Params
{
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.Tick
struct UIngamePlayerDataSurvivor_C_Tick_Params
{
	float                                              DeltaTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.ExecuteUbergraph_IngamePlayerDataSurvivor
struct UIngamePlayerDataSurvivor_C_ExecuteUbergraph_IngamePlayerDataSurvivor_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnUpdateQuestDetails__DelegateSignature
struct UIngamePlayerDataSurvivor_C_OnUpdateQuestDetails__DelegateSignature_Params
{
	TArray<struct FString>                             QuestDetails;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnUpdateQuestDetailsNew__DelegateSignature
struct UIngamePlayerDataSurvivor_C_OnUpdateQuestDetailsNew__DelegateSignature_Params
{
	TArray<struct FS_QuestDetail>                      QuestDetailsNew;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnSetItem__DelegateSignature
struct UIngamePlayerDataSurvivor_C_OnSetItem__DelegateSignature_Params
{
	bool                                               bHaveItem_;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UHSHPickableItem*                            PickableItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnDecreaseScreenOpacity__DelegateSignature
struct UIngamePlayerDataSurvivor_C_OnDecreaseScreenOpacity__DelegateSignature_Params
{
};

// Function IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C.OnTakeDamage__DelegateSignature
struct UIngamePlayerDataSurvivor_C_OnTakeDamage__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
