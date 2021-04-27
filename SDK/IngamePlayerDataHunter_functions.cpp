// Name: hsh, Version: 2

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetIsOnSpecterMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UIngamePlayerDataHunter_C::GetIsOnSpecterMode()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetIsOnSpecterMode");

	UIngamePlayerDataHunter_C_GetIsOnSpecterMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetSpecterLimitTimeRemain
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          SpecterLimitTimeRemain         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpecterLimitDuration           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::GetSpecterLimitTimeRemain(float* SpecterLimitTimeRemain, float* SpecterLimitDuration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetSpecterLimitTimeRemain");

	UIngamePlayerDataHunter_C_GetSpecterLimitTimeRemain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpecterLimitTimeRemain != nullptr)
		*SpecterLimitTimeRemain = params.SpecterLimitTimeRemain;
	if (SpecterLimitDuration != nullptr)
		*SpecterLimitDuration = params.SpecterLimitDuration;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetPassivePerkUnique
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetId         PassivePerkUnique              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::GetPassivePerkUnique(struct FPrimaryAssetId* PassivePerkUnique)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetPassivePerkUnique");

	UIngamePlayerDataHunter_C_GetPassivePerkUnique_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PassivePerkUnique != nullptr)
		*PassivePerkUnique = params.PassivePerkUnique;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.FilterPerkApply
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag            TagApply                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         PerkApply                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer   RecieveTag                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UIngamePlayerDataHunter_C::FilterPerkApply(const struct FGameplayTag& TagApply, const struct FPrimaryAssetId& PerkApply, const struct FGameplayTagContainer& RecieveTag)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.FilterPerkApply");

	UIngamePlayerDataHunter_C_FilterPerkApply_Params params;
	params.TagApply = TagApply;
	params.PerkApply = PerkApply;
	params.RecieveTag = RecieveTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.OnPPApply
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer   Tags                           (BlueprintVisible, BlueprintReadOnly, Parm)
void UIngamePlayerDataHunter_C::OnPPApply(const struct FGameplayTagContainer& Tags)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.OnPPApply");

	UIngamePlayerDataHunter_C_OnPPApply_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetSelectionPassivePerks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetId         PerkPassiveSlot_2              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPrimaryAssetId         PerkPassiveSlot_3              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::GetSelectionPassivePerks(struct FPrimaryAssetId* PerkPassiveSlot_2, struct FPrimaryAssetId* PerkPassiveSlot_3)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetSelectionPassivePerks");

	UIngamePlayerDataHunter_C_GetSelectionPassivePerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PerkPassiveSlot_2 != nullptr)
		*PerkPassiveSlot_2 = params.PerkPassiveSlot_2;
	if (PerkPassiveSlot_3 != nullptr)
		*PerkPassiveSlot_3 = params.PerkPassiveSlot_3;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetPPCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPrimaryAssetId         PerkSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                          TimeRemainingPerk              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Cooldown_DurationPerk          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsCooldown                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           IsReady                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngamePlayerDataHunter_C::GetPPCooldown(const struct FPrimaryAssetId& PerkSlot, float* TimeRemainingPerk, float* Cooldown_DurationPerk, bool* IsCooldown, bool* IsReady)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetPPCooldown");

	UIngamePlayerDataHunter_C_GetPPCooldown_Params params;
	params.PerkSlot = PerkSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeRemainingPerk != nullptr)
		*TimeRemainingPerk = params.TimeRemainingPerk;
	if (Cooldown_DurationPerk != nullptr)
		*Cooldown_DurationPerk = params.Cooldown_DurationPerk;
	if (IsCooldown != nullptr)
		*IsCooldown = params.IsCooldown;
	if (IsReady != nullptr)
		*IsReady = params.IsReady;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.FindHunterSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 ChracterItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FS_HunterSlot>   HunterSlots                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FS_HunterSlot           Slot                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                           bFound                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngamePlayerDataHunter_C::FindHunterSlot(class UObject* ChracterItem, TArray<struct FS_HunterSlot>* HunterSlots, struct FS_HunterSlot* Slot, bool* bFound)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.FindHunterSlot");

	UIngamePlayerDataHunter_C_FindHunterSlot_Params params;
	params.ChracterItem = ChracterItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HunterSlots != nullptr)
		*HunterSlots = params.HunterSlots;
	if (Slot != nullptr)
		*Slot = params.Slot;
	if (bFound != nullptr)
		*bFound = params.bFound;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.IsSpecterCooldown?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsTeleportCooldown             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngamePlayerDataHunter_C::IsSpecterCooldown_(bool* IsTeleportCooldown)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.IsSpecterCooldown?");

	UIngamePlayerDataHunter_C_IsSpecterCooldown__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsTeleportCooldown != nullptr)
		*IsTeleportCooldown = params.IsTeleportCooldown;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.IsImmunityCooldown?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsImmuneCooldown               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngamePlayerDataHunter_C::IsImmunityCooldown_(bool* IsImmuneCooldown)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.IsImmunityCooldown?");

	UIngamePlayerDataHunter_C_IsImmunityCooldown__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsImmuneCooldown != nullptr)
		*IsImmuneCooldown = params.IsImmuneCooldown;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.IsPerkCooldown?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsPerkCooldown                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngamePlayerDataHunter_C::IsPerkCooldown_(bool* IsPerkCooldown)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.IsPerkCooldown?");

	UIngamePlayerDataHunter_C_IsPerkCooldown__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsPerkCooldown != nullptr)
		*IsPerkCooldown = params.IsPerkCooldown;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetText_Charge
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ChargeValue                    (Parm, OutParm)
void UIngamePlayerDataHunter_C::GetText_Charge(struct FText* ChargeValue)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetText_Charge");

	UIngamePlayerDataHunter_C_GetText_Charge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChargeValue != nullptr)
		*ChargeValue = params.ChargeValue;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetIsTraped
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UIngamePlayerDataHunter_C::GetIsTraped()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetIsTraped");

	UIngamePlayerDataHunter_C_GetIsTraped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetHP_Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UIngamePlayerDataHunter_C::GetHP_Percent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetHP_Percent");

	UIngamePlayerDataHunter_C_GetHP_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetSpecterBlock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bIsBlock                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UIngamePlayerDataHunter_C::GetSpecterBlock(bool* bIsBlock)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetSpecterBlock");

	UIngamePlayerDataHunter_C_GetSpecterBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsBlock != nullptr)
		*bIsBlock = params.bIsBlock;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetSpecterCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TimeRemaining                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::GetSpecterCooldown(float* TimeRemaining, float* Duration)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetSpecterCooldown");

	UIngamePlayerDataHunter_C_GetSpecterCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeRemaining != nullptr)
		*TimeRemaining = params.TimeRemaining;
	if (Duration != nullptr)
		*Duration = params.Duration;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetImmuneActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UIngamePlayerDataHunter_C::GetImmuneActive()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetImmuneActive");

	UIngamePlayerDataHunter_C_GetImmuneActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetImmunity_CD_Percent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UIngamePlayerDataHunter_C::GetImmunity_CD_Percent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetImmunity_CD_Percent");

	UIngamePlayerDataHunter_C_GetImmunity_CD_Percent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetImmunityCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TimeRemaining_Immunity         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Cooldown_Duration_Immunity     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::GetImmunityCooldown(float* TimeRemaining_Immunity, float* Cooldown_Duration_Immunity)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetImmunityCooldown");

	UIngamePlayerDataHunter_C_GetImmunityCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeRemaining_Immunity != nullptr)
		*TimeRemaining_Immunity = params.TimeRemaining_Immunity;
	if (Cooldown_Duration_Immunity != nullptr)
		*Cooldown_Duration_Immunity = params.Cooldown_Duration_Immunity;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetActivePerkCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          TimeRemainingPerk              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Cooldown_DurationPerk          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::GetActivePerkCooldown(float* TimeRemainingPerk, float* Cooldown_DurationPerk)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetActivePerkCooldown");

	UIngamePlayerDataHunter_C_GetActivePerkCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimeRemainingPerk != nullptr)
		*TimeRemainingPerk = params.TimeRemainingPerk;
	if (Cooldown_DurationPerk != nullptr)
		*Cooldown_DurationPerk = params.Cooldown_DurationPerk;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetUIPerks
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ActivePerk                     (Parm, OutParm)
// struct FSlateBrush             PassiveUniquePerk              (Parm, OutParm)
// struct FSlateBrush             Perk1                          (Parm, OutParm)
// struct FSlateBrush             Perk2                          (Parm, OutParm)
void UIngamePlayerDataHunter_C::GetUIPerks(struct FSlateBrush* ActivePerk, struct FSlateBrush* PassiveUniquePerk, struct FSlateBrush* Perk1, struct FSlateBrush* Perk2)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetUIPerks");

	UIngamePlayerDataHunter_C_GetUIPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActivePerk != nullptr)
		*ActivePerk = params.ActivePerk;
	if (PassiveUniquePerk != nullptr)
		*PassiveUniquePerk = params.PassiveUniquePerk;
	if (Perk1 != nullptr)
		*Perk1 = params.Perk1;
	if (Perk2 != nullptr)
		*Perk2 = params.Perk2;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetPerkCooldownPercent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UIngamePlayerDataHunter_C::GetPerkCooldownPercent()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetPerkCooldownPercent");

	UIngamePlayerDataHunter_C_GetPerkCooldownPercent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.UpdatePerkCharge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void UIngamePlayerDataHunter_C::UpdatePerkCharge()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.UpdatePerkCharge");

	UIngamePlayerDataHunter_C_UpdatePerkCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetPerkChargeToText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Charge                         (Parm, OutParm)
void UIngamePlayerDataHunter_C::GetPerkChargeToText(struct FText* Charge)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.GetPerkChargeToText");

	UIngamePlayerDataHunter_C_GetPerkChargeToText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Charge != nullptr)
		*Charge = params.Charge;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.UpdateCooldown
// (Public, BlueprintCallable, BlueprintEvent)
void UIngamePlayerDataHunter_C::UpdateCooldown()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.UpdateCooldown");

	UIngamePlayerDataHunter_C_UpdateCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.UpdateScreenFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::UpdateScreenFX(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.UpdateScreenFX");

	UIngamePlayerDataHunter_C_UpdateScreenFX_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.TakeDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       InstigatorCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Dmg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::TakeDamage(class AHSHCharacterBase* InstigatorCharacter, class AHSHCharacterBase* OwnerCharacter, float Dmg)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.TakeDamage");

	UIngamePlayerDataHunter_C_TakeDamage_Params params;
	params.InstigatorCharacter = InstigatorCharacter;
	params.OwnerCharacter = OwnerCharacter;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.TryGetHunter
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AHunterBase_C*           hunter                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::TryGetHunter(class AHunterBase_C** hunter)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.TryGetHunter");

	UIngamePlayerDataHunter_C_TryGetHunter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (hunter != nullptr)
		*hunter = params.hunter;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.Tick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::Tick(float DeltaTime)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.Tick");

	UIngamePlayerDataHunter_C_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.Construct
// (Event, Public, BlueprintCallable, BlueprintEvent)
void UIngamePlayerDataHunter_C::Construct()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.Construct");

	UIngamePlayerDataHunter_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.ExecuteUbergraph_IngamePlayerDataHunter
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::ExecuteUbergraph_IngamePlayerDataHunter(int EntryPoint)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.ExecuteUbergraph_IngamePlayerDataHunter");

	UIngamePlayerDataHunter_C_ExecuteUbergraph_IngamePlayerDataHunter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.OnPerkApply__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PerkSlot                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::OnPerkApply__DelegateSignature(int PerkSlot)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.OnPerkApply__DelegateSignature");

	UIngamePlayerDataHunter_C_OnPerkApply__DelegateSignature_Params params;
	params.PerkSlot = PerkSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.OnDecreaseScreenOpacity__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UIngamePlayerDataHunter_C::OnDecreaseScreenOpacity__DelegateSignature()
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.OnDecreaseScreenOpacity__DelegateSignature");

	UIngamePlayerDataHunter_C_OnDecreaseScreenOpacity__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.OnTakeDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHSHCharacterBase*       InstigatorCharacter            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHSHCharacterBase*       OwnerCharacter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Dmg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UIngamePlayerDataHunter_C::OnTakeDamage__DelegateSignature(class AHSHCharacterBase* InstigatorCharacter, class AHSHCharacterBase* OwnerCharacter, float Dmg)
{
	static auto fn = nullptr;
	if (!fn)
		fn = 
UObject::FindObject<UFunction>("Function IngamePlayerDataHunter.IngamePlayerDataHunter_C.OnTakeDamage__DelegateSignature");

	UIngamePlayerDataHunter_C_OnTakeDamage__DelegateSignature_Params params;
	params.InstigatorCharacter = InstigatorCharacter;
	params.OwnerCharacter = OwnerCharacter;
	params.Dmg = Dmg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
