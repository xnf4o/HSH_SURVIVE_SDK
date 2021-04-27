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

// BlueprintGeneratedClass IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C
// 0x0098 (FullSize[0x0100] - InheritedSize[0x0068])
class UIngamePlayerDataSurvivor_C : public UIngamePlayerDataBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0068(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class ASurvivorBase_C*                             survivor;                                                  // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTakeDamage;                                              // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              Opacity;                                                   // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScreenFX_Delay;                                            // 0x0094(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DecreaseAlphaTime;                                         // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bScreenFX;                                                 // 0x009C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2SID[0x3];                                     // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnDecreaseScreenOpacity;                                   // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnSetItem;                                                 // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FS_QuestDetail>                      QuestDetailNew;                                            // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnUpdateQuestDetailsNew;                                   // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FString>                             QuestDetails;                                              // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnUpdateQuestDetails;                                      // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = nullptr;
	if (!ptr)
		ptr = 
UObject::FindClass("BlueprintGeneratedClass IngamePlayerDataSurvivor.IngamePlayerDataSurvivor_C");
		return ptr;
	}



	void GetPPCooldown(const struct FPrimaryAssetId& PerkSlot, float* TimeRemainingPerk, float* Cooldown_DurationPerk, bool* IsCooldown, bool* IsReady);
	void GetSelectionPerk(struct FPrimaryAssetId* PerkPassiveSlot_2, struct FPrimaryAssetId* PerkPassiveSlot_3);
	void FindSurvivorSlot(class UObject* characteritem, TArray<struct FS_SurvivorSlot>* SurvivorSlots, struct FS_SurvivorSlot* Slot, bool* Found, int* Array_Index);
	void GetUIPerk(struct FSlateBrush* ActivePerk, struct FSlateBrush* Perk1, struct FSlateBrush* Perk2);
	void TryGetInteractComponent(class UInteractComponent_C** InteractComponent);
	void GetCooldownItem(float* TimeRemaining, float* Duration);
	bool GetDrinkEffect();
	void GetCurrentPickItem(struct FS_Pickable* CurrentPickItem);
	struct FText GetDurability();
	float GetStamina_Percent();
	float GetHP_Percent();
	void GetQuestDetail(struct FString* Return);
	void MakeQuestDetails(TArray<struct FString>* Array, struct FString* Str);
	void UpdateQuestDetailsNew(TArray<struct FS_QuestDetail>* QuestDetailsNew);
	void UpdateQuestDetails(TArray<struct FString>* QuestDetails);
	void SetItem(bool bHaveItem_, class UHSHPickableItem* PickableItem);
	void UpdateScreenFX(float DeltaTime);
	void TakeDamage();
	void TryGetSurvivor(class ASurvivorBase_C** survivor);
	void Construct();
	void Tick(float DeltaTime);
	void ExecuteUbergraph_IngamePlayerDataSurvivor(int EntryPoint);
	void OnUpdateQuestDetails__DelegateSignature(TArray<struct FString>* QuestDetails);
	void OnUpdateQuestDetailsNew__DelegateSignature(TArray<struct FS_QuestDetail>* QuestDetailsNew);
	void OnSetItem__DelegateSignature(bool bHaveItem_, class UHSHPickableItem* PickableItem);
	void OnDecreaseScreenOpacity__DelegateSignature();
	void OnTakeDamage__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
