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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IngamePlayerDataHunter.IngamePlayerDataHunter_C
// 0x00F4 (FullSize[0x015C] - InheritedSize[0x0068])
class UIngamePlayerDataHunter_C : public UIngamePlayerDataBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0068(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class AHunterBase_C*                               hunter;                                                    // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Opacity;                                                   // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScreenFX_Delay;                                            // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bScreenFX;                                                 // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FWWT[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnTakeDamage;                                              // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              TimeRemainingPerk;                                         // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Cooldown_DurationPerk;                                     // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsPerkCooldown;                                            // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0LYQ[0x3];                                     // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeRemainingTeleport;                                     // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Cooldown_DurationTeleport;                                 // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsTeleportCooldown;                                        // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PY3N[0x3];                                     // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeRemaining_Immunity;                                    // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Cooldown_Duration_Immunity;                                // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsImmuneCooldown;                                          // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S7HO[0x3];                                     // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Max_Show_Scanned_Time;                                     // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ChargeValue;                                               // 0x00C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              DecreaseAlphaTime;                                         // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S66D[0x4];                                     // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDecreaseScreenOpacity;                                   // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnPerkApply;                                               // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<struct FPrimaryAssetId, struct FGameplayTag>  HunterPerkApply;                                           // 0x0108(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SpecterTimeRemain;                                         // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IngamePlayerDataHunter.IngamePlayerDataHunter_C");
		return ptr;
	}



	bool GetIsOnSpecterMode();
	void GetSpecterLimitTimeRemain(float* SpecterLimitTimeRemain, float* SpecterLimitDuration);
	void GetPassivePerkUnique(struct FPrimaryAssetId* PassivePerkUnique);
	void FilterPerkApply(const struct FGameplayTag& TagApply, const struct FPrimaryAssetId& PerkApply, const struct FGameplayTagContainer& RecieveTag);
	void OnPPApply(const struct FGameplayTagContainer& Tags);
	void GetSelectionPassivePerks(struct FPrimaryAssetId* PerkPassiveSlot_2, struct FPrimaryAssetId* PerkPassiveSlot_3);
	void GetPPCooldown(const struct FPrimaryAssetId& PerkSlot, float* TimeRemainingPerk, float* Cooldown_DurationPerk, bool* IsCooldown, bool* IsReady);
	void FindHunterSlot(class UObject* ChracterItem, TArray<struct FS_HunterSlot>* HunterSlots, struct FS_HunterSlot* Slot, bool* bFound);
	void IsSpecterCooldown_(bool* IsTeleportCooldown);
	void IsImmunityCooldown_(bool* IsImmuneCooldown);
	void IsPerkCooldown_(bool* IsPerkCooldown);
	void GetText_Charge(struct FText* ChargeValue);
	bool GetIsTraped();
	float GetHP_Percent();
	void GetSpecterBlock(bool* bIsBlock);
	void GetSpecterCooldown(float* TimeRemaining, float* Duration);
	bool GetImmuneActive();
	float GetImmunity_CD_Percent();
	void GetImmunityCooldown(float* TimeRemaining_Immunity, float* Cooldown_Duration_Immunity);
	void GetActivePerkCooldown(float* TimeRemainingPerk, float* Cooldown_DurationPerk);
	void GetUIPerks(struct FSlateBrush* ActivePerk, struct FSlateBrush* PassiveUniquePerk, struct FSlateBrush* Perk1, struct FSlateBrush* Perk2);
	float GetPerkCooldownPercent();
	void UpdatePerkCharge();
	void GetPerkChargeToText(struct FText* Charge);
	void UpdateCooldown();
	void UpdateScreenFX(float DeltaTime);
	void TakeDamage(class AHSHCharacterBase* InstigatorCharacter, class AHSHCharacterBase* OwnerCharacter, float Dmg);
	void TryGetHunter(class AHunterBase_C** hunter);
	void Tick(float DeltaTime);
	void Construct();
	void ExecuteUbergraph_IngamePlayerDataHunter(int EntryPoint);
	void OnPerkApply__DelegateSignature(int PerkSlot);
	void OnDecreaseScreenOpacity__DelegateSignature();
	void OnTakeDamage__DelegateSignature(class AHSHCharacterBase* InstigatorCharacter, class AHSHCharacterBase* OwnerCharacter, float Dmg);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
